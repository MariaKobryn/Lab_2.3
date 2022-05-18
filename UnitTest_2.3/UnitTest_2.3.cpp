#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab(2.3)/LongLong.cpp"
#include "../Lab(2.3)/LongLong.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(5, 9), B(2, 4);
			Assert::AreEqual(A.Gt(A, B), true);
			Assert::AreEqual(B.Gt(B, A), false);
			Assert::AreEqual(B.Lt(A, B), false);
			Assert::AreEqual(B.Ltq(A, B), false);
		}
	};
}
