#include "stdafx.h"
#include "CppUnitTest.h"
#include "ZipFile.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ZipUtilsTest
{		
	TEST_CLASS(ZipFileTest)
	{
	public:
		
		TEST_METHOD(FirstTest)
		{
			ZipFile zipFile(L"c:\\temp\\Test.zip");
		}

	};
}