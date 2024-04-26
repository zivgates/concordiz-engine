#include "headers/console.h"
#include <wincontypes.h>




void pause_engine(HANDLE consoleHandle){
    INPUT_RECORD inputRecord;
    DWORD numEventsRead;
    while(TRUE){
        ReadConsoleInput(consoleHandle, &inputRecord, 1, &numEventsRead);
        if(inputRecord.EventType == KEY_EVENT && inputRecord.Event.KeyEvent.bKeyDown) break;
    }
}