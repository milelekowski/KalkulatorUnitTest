#include "pch.h"
#include "CppUnitTest.h"
#include "../Kalkulator/funkcje.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestKalkulatora
{
	TEST_CLASS(TestKalkulatora)
	{
	public:
		
		TEST_METHOD(TestLnFunction)
		{
			double result = 0.69314718;
			Assert::IsTrue(abs(result - ln(2.0) < .001));
		}

		TEST_METHOD(TestExponentFunction)
		{
			double result = 33.11545195;
			Assert::IsTrue(abs(result - exponent(3.5) < .001));
		}

		TEST_METHOD(TestStandardDeviationFunction)
		{
			double numbers[5] = { 9, 24, 31, 10, 10 };
			double result = 10.08464;
			Assert::IsTrue(abs(result - standard_deviation(numbers, 5) < .001));
		}

		TEST_METHOD(TestMaxElementFunction)
		{
			double numbers[5] = { 9, 24, 31, 10, 10 };
			Assert::AreEqual(31.0, max_element(numbers, 5));
		}
	};
}
