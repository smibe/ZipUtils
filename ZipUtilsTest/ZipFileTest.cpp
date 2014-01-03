#include "stdafx.h"
#include "CppUnitTest.h"
#include "ZipFile.h"
#include "File.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace SmxUtils;

namespace ZipUtilsTest
{		
  TEST_CLASS(ZipFileTest)
  {
  public:

    TEST_METHOD(FirstTest)
    {
      ZipFile zipFile(L"c:\\temp\\Test.zip");
      Assert::IsTrue(File::Exists(L"Test.zip"));
      
    }

  };
}