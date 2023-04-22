#include <stdio.h>
#include <windows.h>

int main() {

    LPCWSTR exec_path = L"C:\\Windows\\System32\\calc.exe";
    STARTUPINFOW si = {0};
    PROCESS_INFORMATION pi = {0};

    if (!CreateProcessW(
        exec_path, NULL, NULL, NULL, FALSE, 
        BELOW_NORMAL_PRIORITY_CLASS, NULL, NULL , &si, &pi
    )) {
        printf("(-) Creating Process Failed : %ld", GetLastError);
        return EXIT_FAILURE;
    }
    printf("(+) Process Created with id %ld", pi.dwProcessId);

    return EXIT_SUCCESS;
}