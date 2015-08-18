#include "pch.hpp"

#include "VideoCaptureInfoGetter.h"

int wmain()
{
	using namespace std;

	auto count = GetDeviceCount();

	wcout << L"Device List:" << endl;
	for (auto i = 0; i < count; ++i)
	{
		wchar_t name[256];
		GetDeviceName(i, name, sizeof(name));
		wcout << name << endl;
	}

	wcout << endl;
	wcout << L"Exit if keydown." << endl;
	getchar();
    return 0;
}