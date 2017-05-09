#include "Processor.h"

Processor::Processor(string inModel, string inClockSpeed, string inNumCore, string inNumThread)
{
    model = inModel;
    clockSpeed = inClockSpeed;
    numCore = inNumCore;
    numThread = inNumThread;
}

string Processor::getModel()
{
    return model;
}

string Processor::getClockSpeed(){
    return clockSpeed;
}

string Processor::getNumCore()
{
    return numCore;
}

string Processor::getNumThread()
{
    return numThread;
}


