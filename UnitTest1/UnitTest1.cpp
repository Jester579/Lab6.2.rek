#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = 3 % 2 != 0;
			if (c == 0)
				c = 1;
			Assert::AreEqual(c, 1, 0.1);
		}
	};
}
