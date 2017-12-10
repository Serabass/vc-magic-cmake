#ifndef VC_MAGIC_CMAKE_LIBRARY_H
#define VC_MAGIC_CMAKE_LIBRARY_H

#include <ntdef.h>
#include <minwindef.h>

BOOL WINAPI DllMain(
        _In_ HINSTANCE hinstDLL,
        _In_ DWORD     fdwReason,
        _In_ LPVOID    lpvReserved
);

#endif