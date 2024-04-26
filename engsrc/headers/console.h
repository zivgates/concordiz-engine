#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED

#include <windows.h>


typedef struct _window{
    int x;
    int y;
    char* title;
} window;

typedef struct _cndizChar{
    COORD position;
    char  character;
} cndizChar;



HANDLE create_window(window* window);
void pause_engine(HANDLE consoleHandle);
void cndiz_puts(HANDLE consoleHandle, LPCSTR content);
DWORD cndiz_putchar(HANDLE consoleHandle, cndizChar* charInfo);



#endif