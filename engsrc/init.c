#include "headers/console.h"




HANDLE create_window(window* window){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = {0,0, window->x, window->y};
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
    SetConsoleTitle(window->title);
    return hConsole;
}