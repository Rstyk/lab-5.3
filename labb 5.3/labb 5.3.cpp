#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3/lab 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace labb53
{
	TEST_CLASS(labb53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			test = z(1);
			double b = abs(test - 0.611742);

			Assert::IsTrue(b < 1e-5);

		}
	};
}
