#pragma once

#ifdef VIDEOCAPTUREINFOGETTER_EXPORTS
#define VIDEOCAPTUREINFOGETTER_API __declspec(dllexport)
#else
#define VIDEOCAPTUREINFOGETTER_API __declspec(dllimport)
#endif

extern "C" VIDEOCAPTUREINFOGETTER_API unsigned int GetDeviceCount();
extern "C" VIDEOCAPTUREINFOGETTER_API void GetDeviceName(unsigned int index, wchar_t* str, unsigned int length);