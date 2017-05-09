#ifndef MULTI_INHERITANCE_DESKTOP_H
#define MULTI_INHERITANCE_DESKTOP_H

#endif //MULTI_INHERITANCE_DESKTOP_H
#include "Processor.h"
#include "Memory.h"


class Desktop : public Processor, public Memory
{
private:
    string OS;
    string builtOn;

public:
    Desktop(string, string);
    string getOS();
    string getBuiltOn();
};