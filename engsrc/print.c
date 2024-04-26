#include "headers/console.h"
#include <consoleapi2.h>




void cndiz_puts(HANDLE consoleHandle, LPCSTR content){
    WriteConsoleA(consoleHandle, content, lstrlen(content), NULL, NULL);
}   


DWORD cndiz_putchar(HANDLE consoleHandle, cndizChar* charInfo){
    DWORD written;
    WriteConsoleOutputCharacterA(consoleHandle, &charInfo->character, 1, charInfo->position, &written);
    return written;
}   