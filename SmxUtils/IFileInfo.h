#pragma once
#include <string>

class IFileInfo
{
public:
  virtual bool FileExists(const std::wstring& filePath) = 0;
};

