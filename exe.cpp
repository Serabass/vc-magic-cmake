//
// Created by serab on 11.12.2017.
//

#include <cstdio>
#include <Windows.h>

void dummyFunction(int i);

int main(int argc, char ** argv) {
    auto lib = LoadLibrary("libdummy_dll.dll");
    // printf("%d", 111);

    FreeLibrary(lib);
}

void dummyFunction(int i) {
    printf("Called dummyFunction: %d", i);
}
