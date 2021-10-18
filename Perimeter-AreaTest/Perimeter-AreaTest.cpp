#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PerimeterAreaTest
{
	TEST_CLASS(PerimeterAreaTest)
	{
	public:
		
		TEST_METHOD(AreaFunctionality)
		{
			//This function Validates perimeter and area formula using 3 and 2
			int result = 0;
			result = 3 * 2;
			Assert::AreEqual(6, result);
		}
		
		TEST_METHOD(PerimeterFunctionality)
		{
			//This function Validates perimeter formula using 3 and 2
			int result = 0;
			result = 3 + 3 + 2 + 2;
			Assert::AreEqual(10, result);
		}
		
	};
}
