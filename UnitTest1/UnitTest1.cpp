#include "pch.h"
#include "CppUnitTest.h"
#include "../4.2/Trapeze.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Trapeze D(7, 5, 3, 4);
			Assert::AreEqual(D.Perimeter(), 19.0);
		}
	};
}
