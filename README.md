# Ananke Core

Author: Mason Stevenson

[https://masonstevenson-dev.github.io/](https://masonstevenson-dev.github.io/)

<br>

Ananke Core is a "grab bag" plugin of various tools and base classes used in my other projects. Currently it is used in the following projects:

* [Mantle ECS](https://github.com/masonstevenson-dev/Mantle) (required)
* [HexEngine](https://github.com/masonstevenson-dev/HexEngine) (enabled by default, but you can disable it using the `bUseAnankeLog` flag in the plugin's Build.cs files)
* [AutomationGraph](https://github.com/masonstevenson-dev/AutomationGraph) (enabled by default, but you can disable it using the `bUseAnankeLog` flag in the plugin's Build.cs files)

<br>

## Supported Engine Versions

AnankeCore currently supports **UE 5.4.**

<br>

## Installation

Install this plugin in your project's plugins folder. The folder structure should be: `YourProject/Plugins/AnankeCore/AnankeCore/Source`.



The plugin is enabled by default.



## Plugin Contents

### AnankeLog

AnankeLog is a logging system meant to replace the standard UE_LOG macro. It comes with a few different log types:

* ANANKE_LOG
* ANANKE_LOG_OBJECT
* ANANKE_LOG_PERIODIC



All logs are passed through the AnankeLoggingSubsystem, which gives the added benefit of logging both to the console and to the screen. By default, only Warning and Error logs get logged to both the console and the screen. For all log types, if the AnankeLoggingSubsystem can't be accessed, UE_LOG is used as a fallback.



For all log types, log macros are complied out for shipping builds (UE_BUILD_SHIPPING).

<br>

#### Recommended Usage

If you want to include this logging system in your own project, I highly recommend creating a macro alias for the Ananke logging macros, so that you can easily revert back to UE_LOG if necessary. Furthermore, if you ever want to swap out the logging system at a later date, you can do so without having to edit every single project file.

```c++
#pragma once

#if WITH_ANANKE_LOG_YOUR_PLUGIN
#include "Macros/AnankeCoreLoggingMacros.h"
#endif

#if WITH_ANANKE_LOG_YOUR_PLUGIN
#define YourPlugin_LOG(CategoryName, Verbosity, Format, ...) ANANKE_LOG(CategoryName, Verbosity, Format, ##__VA_ARGS__)
#else
#define YourPlugin_LOG(CategoryName, Verbosity, Format, ...) UE_LOG(CategoryName, Verbosity, Format, ##__VA_ARGS__)
#endif

#if WITH_ANANKE_LOG_YOUR_PLUGIN
#define YourPlugin_LOG(TargetObject, CategoryName, Verbosity, Format, ...) ANANKE_LOG_OBJECT(TargetObject, CategoryName, Verbosity, Format, ##__VA_ARGS__)
#else
#define YourPlugin_LOG(TargetObject, CategoryName, Verbosity, Format, ...) UE_LOG(CategoryName, Verbosity, Format, ##__VA_ARGS__)
#endif
```



You can set up your Build.cs file to toggle on/off the custom logging functionality by adding a bUseAnankeLog flag:

```c#
public class YourPluginRuntime : ModuleRules
{
    public YourPluginRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        // Set to false to revert back to UE_LOG
        bUseAnankeLog = true;
        
        // ... 

        if (bUseAnankeLog)
        {
            PublicDefinitions.Add("WITH_ANANKE_LOG_YOUR_PLUGIN=1");
        }
        else
        {
            PublicDefinitions.Add("WITH_ANANKE_LOG_YOUR_PLUGIN=0");
        }
        
        // ...

        if (bUseAnankeLog)
        {
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "AnankeCoreRuntime",
                }
            );
        }
    }
    
    public bool bUseAnankeLog { get; set; }
}
```

<br>

#### Log Macros

##### ANANKE_LOG(CategoryName, Verbosity, Format, ...)

Works just like UE_LOG but logs additional info about the line where this was logged. 

<br>

Example Log:

`YourLogCategory:  [Function=USomeObject::SomeFunction]YourFile.cpp:15 This is an example log.`

<br>

##### ANANKE_LOG_OBJECT(TargetObject, CategoryName, Verbosity, Format, ...)

Works similarly to ANANKE_LOG, but additionally records a target UOBJECT and its netmode, if available.

<br>

Example Log:

`YourLogCategory: Error:  [NetMode=Server][Object=SomeObject_0][Function=USomeObject::SomeFunction]YourFile.cpp:15 This is an example log.`

<br>

##### ANANKE_LOG_PERIODIC(Verbosity, LogMessage, LogRate)

ANANKE_LOG_PERIODIC is a rate-limited log, meaning that log messages are collected within a certain time window but not actually logged. So for example, if a log message is set to log every 1 second, and it gets called 100 times within one second, only a single log with "count=100" will be published to the console/screen.

<br>

Currently, periodic logs are only available while in game or PIE. All log messages are logged to the same category (LogAnankePeriodic).

<br>

Example Log:

`LogAnankePeriodic:  [Function=USomeObject::SomeFunction]YourFile.cpp:15  PERIODIC_LOG(count=26): Your periodic log!`

<br>

### TestSuiteTemplate.cpp

If you are interested in writing your own unit tests, this is a great starting point. Simply copy this file and fill out the TODOs.