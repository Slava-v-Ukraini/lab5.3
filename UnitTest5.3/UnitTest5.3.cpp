#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// ���������� ������� h ��� abs(x) >= 1
			double x = 1.5;
			double result = h(x);
			double expected = (cos(x) + 1) / exp(x);  // ���������� ��������� ��� abs(x) >= 1
			Assert::AreEqual(result, expected, 1e-6);
		}

		TEST_METHOD(TestMethod2)
		{
			// ���������� ������� h ��� abs(x) < 1
			double x = 0.5;
			double result = h(x);
			double expected = 1.0 / pow(sin(x), 2);  // ���������� ��������� ��� abs(x) < 1
			Assert::AreEqual(result, expected, 1e-6);
		}
	};
}
