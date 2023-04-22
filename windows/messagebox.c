#include <windows.h>
#include <stdio.h>

int main() {

    LPCWSTR message = L"Hello World";

    LPCWSTR title = L"Title";

    int message_clicked = MessageBoxW(NULL, message, title, MB_YESNOCANCEL | MB_ICONEXCLAMATION);

    printf("%i", message_clicked);

    return EXIT_SUCCESS;

}