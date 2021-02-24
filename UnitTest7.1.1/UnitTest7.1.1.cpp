#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1.1/lab7.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = 1;
			int High = 17;
			int rowCount = 12;
			int colCount = 11;
			int** a = new int* [rowCount];
			int S = 0;
			int k = 0;
			Calc(a, rowCount, colCount, S, k);
		}
	};
}
