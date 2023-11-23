#include "pch.h"
#include "CppUnitTest.h"
#include "../13.2/math.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = CUBE(3);
			Assert::AreEqual(a,27);
		}
	};
}
