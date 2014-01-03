#pragma once
#include <string>
#include <stdlib.h>
#include <memory>
#include <stdio.h>
#include "IFileInfo.h"

namespace SmxUtils
{
  class File
  {
  public:
    static bool Exists(const std::wstring& fileName)
    {
      return getFileInfo()->FileExists(fileName);
    }
    
  protected:
    static IFileInfo *getFileInfo();
    static std::unique_ptr<IFileInfo> sm_fileInfo;
  };
}

