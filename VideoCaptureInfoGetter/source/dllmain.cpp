#include "pch.hpp"

#include "ComInitializeWrapper.hpp"

::std::unique_ptr<::Mntone::ComSupport::ComInitializeWrapper> comInitilizer;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID reserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		comInitilizer = ::std::make_unique<::Mntone::ComSupport::ComInitializeWrapper>();
		break;

	case DLL_PROCESS_DETACH:
		comInitilizer.release();
		break;
	}
	return TRUE;
}