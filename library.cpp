#include "library.h"

#include <iostream>
#include <windows.h>


extern "C" BOOL WINAPI DllMain(
        _In_ HINSTANCE hinstDLL,
        _In_ DWORD fdwReason,
        _In_ LPVOID lpvReserved
) {
    switch (fdwReason) {
        case DLL_PROCESS_ATTACH:
            MessageBox(NULL, "123", "123", NULL);
            break;
        case DLL_PROCESS_DETACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        default:
            break;
    }
    return TRUE;
}
