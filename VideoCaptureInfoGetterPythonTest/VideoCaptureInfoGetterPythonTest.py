#!python

from ctypes import *

cdll.LoadLibrary("VideoCaptureInfoGetter.dll")

VideoCaptureInfoGetter = CDLL("VideoCaptureInfoGetter.dll")
VideoCaptureInfoGetter.GetDeviceCount.restype = c_uint
VideoCaptureInfoGetter.GetDeviceCount.argtypes = []
VideoCaptureInfoGetter.GetDeviceName.restype = None
VideoCaptureInfoGetter.GetDeviceName.argtypes = [c_uint, c_wchar_p, c_uint]

def getDeviceCount():
	return VideoCaptureInfoGetter.GetDeviceCount()

def getDeviceName(index):
	ptr = create_unicode_buffer(256);
	VideoCaptureInfoGetter.GetDeviceName(index, ptr, sizeof(ptr))
	return ptr.value

if __name__ == "__main__":
	count = getDeviceCount()
	print("Device List:")
	for i in range(count):
		name = getDeviceName(i)
		print(name)

	print()
	print("Exit if keydown.")
	input()