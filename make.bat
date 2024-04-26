@echo off

cl /c engsrc/*.c 
lib.exe *.obj /OUT:gmsrc/lib/concordiz.lib
del *.obj
cl gmsrc/*.c gmsrc/lib/concordiz.lib /Fe:game.exe
del *.obj


start game.exe

