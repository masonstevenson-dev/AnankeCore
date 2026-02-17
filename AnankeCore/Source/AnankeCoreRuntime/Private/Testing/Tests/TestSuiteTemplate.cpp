// Copyright © Mason Stevenson
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted (subject to the limitations in the disclaimer
// below) provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
// THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
// NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "AnankeCoreLoggingDefs.h"
#include "Macros/AnankeCoreLoggingMacros.h"
#include "Logging/LogVerbosity.h"
#include "Misc/AutomationTest.h"

/**
 * TestSuiteTemplate.cpp
 *
 * This file provides the minimum boilerplate code for creating a test suite using the UE automation test framework.
 * To use this template, copy/paste the contents of this file into your own test file and then resolve all the TODOs.
 *
 * TODO(Author): Remove this comment block.
 */

#if WITH_EDITOR

class TestSuite
{
public:
	TestSuite(FAutomationTestBase* NewTestFramework): TestFramework(NewTestFramework)
	{
		// This constructor is run before each test.
		
		// TODO(Author): Initialize any additional test data needed here.
		// You are free to add additional arguments to this constructor if you have more stuff you want to pass in.
	}

	~TestSuite()
	{
		// This destructor is run after each test.
		
		// TODO(Author): Be sure to destroy any any test objects you spawned in the constructor!
	}

	// TODO(Author): Remove this test and replace with a real test.
	void Test_Example()
	{
		ANANKE_LOG(LogAnankeCoreTest, Log, TEXT("Running Test_ExampleTest"));
		TestFramework->TestTrue(TEXT("false"), false); // should always fail.
	}

	// IMPORTANT! Be sure to register your fn inside your AutomationTest class below!

private:
	FAutomationTestBase* TestFramework;
};

#define REGISTER_TEST_SUITE_FN(TargetTestName) Tests.Add(TEXT(#TargetTestName), &TestSuite::TargetTestName)

// TODO(Author): Rename this class to F[your test name]Test
class FExampleSuiteTest: public FAutomationTestBase
{
public:
	typedef void (TestSuite::*TestFunction)();

	// TODO(Author): Rename the constructor for this class to class to F[your test name]Test()
	FExampleSuiteTest(const FString& TestName): FAutomationTestBase(TestName, false)
	{
		// TODO(Author): Remove this and add each test from your test suite here.
		REGISTER_TEST_SUITE_FN(Test_Example);
	}
	
	virtual EAutomationTestFlags GetTestFlags() const override
	{
		// TODO(Author): Set your test flags here.
		return EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter;
	}
	virtual bool IsStressTest() const { return false; }
	virtual uint32 GetRequiredDeviceNum() const override { return 1; }

protected:
	virtual FString GetBeautifiedTestName() const override
	{
		// TODO(Author): Set your test name here.
		// This string is what the editor uses to organize your test in the Automated tests browser.
		return "AnankeExample.Core.Runtime.TestSuiteExample";
	}
	virtual void GetTests(TArray<FString>& OutBeautifiedNames, TArray<FString>& OutTestCommands) const override
	{
		TArray<FString> TargetTestNames;
		Tests.GetKeys(TargetTestNames);
		for (const FString& TargetTestName : TargetTestNames)
		{
			OutBeautifiedNames.Add(TargetTestName);
			OutTestCommands.Add(TargetTestName);
		}
	}
	virtual bool RunTest(const FString& Parameters) override
	{
		TestFunction* CurrentTest = Tests.Find(Parameters);
		if (!CurrentTest || !*CurrentTest)
		{
			ANANKE_LOG(LogAnankeCoreTest, Error, TEXT("Cannot find test: %s"), *Parameters);
			return false;
		}

		TestSuite Suite(this);
		(Suite.**CurrentTest)(); // Run the current test from the test suite.

		return true;
	}

	TMap<FString, TestFunction> Tests;
};

namespace
{
	// TODO(Author): Change this to: F[your test name]Test F[your test name]TestInstance(TEXT("F[your test name]Test")); 
	FExampleSuiteTest FExampleSuiteTestInstance(TEXT("FExampleSuiteTest"));
}

#endif //WITH_EDITOR