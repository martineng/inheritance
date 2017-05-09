#include "Memory.h"

Memory::Memory(string inModel, string inClockSpeed, string inMemoryType)
{
    model = inModel;
    clockSpeed = inClockSpeed;
    memoryType = inMemoryType;
} //END

string Memory::getModel()
{
    return model;
}

string Memory::getClockSpeed()
{
    return clockSpeed;
}

string Memory::getMemoryType()
{
    return memoryType;
}
