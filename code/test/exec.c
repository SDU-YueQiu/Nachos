#include "syscall.h"

int main()
{
    SpaceId pid;
    Print("exec.c running 0");
    pid = Exec("../test/halt.noff");
    Print("exec.c running 1");
    Yield();
    Exit(0);
}