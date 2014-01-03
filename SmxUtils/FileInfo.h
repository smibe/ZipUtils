#pragma once
#include <Windows.h>
#include "IFileInfo.h"

namespace SmxUtils { namespace Win32 {
class FileInfo : public IFileInfo
{
public:
  FileInfo(void);
  ~FileInfo(void);
  
  bool FileExists(const std::wstring& fileName)
  {
    return ::GetFileAttributes(fileName.c_str()) != INVALID_FILE_ATTRIBUTES;
  }
};
}}
