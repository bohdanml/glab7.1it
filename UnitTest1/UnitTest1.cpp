#include "pch.h"
#include "CppUnitTest.h"
#include "..//glab7.1it/lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCalc)
		{
			const int rowCount = 2;
			const int colCount = 2;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			// Заповнення масиву значеннями для тесту
			a[0][0] = 6; a[0][1] = 13;
			a[1][0] = 4; a[1][1] = 8;

			//  функція підрахунку
			int S, k;
			Calc(a, rowCount, colCount, S, k);

			
			Assert::AreEqual(18, S); 
			Assert::AreEqual(3, k);  

			
			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}