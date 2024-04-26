#include "headers/console.h"




int main() {
    int x = 0;
    int y = 0;
    window win = { 100, 10, "kys" };
    HANDLE consoleHandle = create_window(&win);

    for (int i = 0; i < 100; i++) {
        cndizChar cChar = { (COORD){x, y}, '&' };
        cndiz_putchar(consoleHandle, &cChar);
        y++;
        x++;
        Sleep(1000);
    }
    return 0;
}