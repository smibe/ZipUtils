#include "stdafx.h"
#include "File.h"
#include "FileInfo.h"

using namespace SmxUtils;

std::unique_ptr<IFileInfo> File::sm_fileInfo;
IFileInfo* File::getFileInfo()
{
  if (sm_fileInfo.get() == nullptr)
    sm_fileInfo.reset(new SmxUtils::Win32::FileInfo());

  return sm_fileInfo.get();
}