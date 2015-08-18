#include "pch.hpp"
#include "VideoCaptureInfoGetter.h"

#include "DeviceEnumerator.hpp"

unsigned int GetDeviceCount()
{
	::Mntone::DirectShowSupport::DeviceEnumerator enumerator;
	return static_cast<int>(enumerator.GetVideoInputDeviceNames().size());
}

void GetDeviceName(unsigned int index, wchar_t* str, unsigned int length)
{
	::Mntone::DirectShowSupport::DeviceEnumerator enumerator;
	auto name = enumerator.GetVideoInputDeviceNames()[index];
	memcpy(str, name.c_str(), ::std::max<size_t>(length, name.length()));
}