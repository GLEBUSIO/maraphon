#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication25/Header.h"
#include "../ConsoleApplication25/processing.h"
#include "../ConsoleApplication25/Header1.h"
#include "../ConsoleApplication25/Calculate.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace unittestproject
{
	TEST_CLASS(unittestproject)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Data data[6]
			{
				{"1", "licenko Anya", "t", "00:12:00", "03:12:00", "sportak"},
				{"2", "licenko Anya", "t", "00:12:00", "03:12:00", "sportak"},
				{"3", "Kiki", "Anya", "d", "00:12:00", "01:14:00", "sportak"},
				{"4", "Kiki", "Anya", "d", "00:12:00", "01:15:00", "sportak"},
				{"5", "Kiki", "Anya", "d", "00:12:00", "01:16:00", "sportak"},
				{"6", "Kiki", "Anya", "d", "00:12:00", "01:17:00", "sportak"},
			};
			Assert::AreEqual(Calculate(data, 6), string("01:17:00"));
		}
		
	};
}
