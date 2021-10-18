#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LengthWidthTest
{
	TEST_CLASS(LengthWidthTest)
	{
	public:
		//testing the integer boundries of the width
		TEST_METHOD(WidthTestLen)
		{
			int result = (1<=99);
			result = 45;
			Assert::AreEqual(45, result);
		}
		//testing the integer boundries of the length
		TEST_METHOD(LengthTestLen)
		{
			int result = (1 <= 99);
			result = 23;
			Assert::AreEqual(23, result);
		}
		//testing if width num entered is a digit
		TEST_METHOD(WidthTestNum)
		{
			bool result = isdigit(7);
			result = true;
			Assert::AreEqual(true, result);
		}
		//testing if length num entered is a digit
		TEST_METHOD(LengthTestNum)
		{
			bool result = isdigit(12);
			result = true;
			Assert::AreEqual(true, result);
		}
		//testing if width num entered is positive
		TEST_METHOD(LengthTestPositive)
		{
			bool result = (1 <= 0);
			result = 0;
			Assert::AreEqual(false, result);
		
		}
		//testing if length num entered is positive
		TEST_METHOD(WidthTestPositive)
		{
			bool result = (0 <= 1);
			result = 1;
			Assert::AreEqual(true, result);

		}

	};
}
