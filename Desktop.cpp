#include "Dekstop.h"

Desktop::Desktop(string inOS, string inBuiltOn)
{
    OS = inOS;
    builtOn = inBuiltOn;
}

string Desktop::getOS()
{
    return OS;
}

string Desktop::getBuiltOn()
{
    return builtOn;
}