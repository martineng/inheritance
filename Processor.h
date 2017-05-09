#ifndef MULTI_INHERITANCE_PROCESSOR_H
#define MULTI_INHERITANCE_PROCESSOR_H

#endif //MULTI_INHERITANCE_PROCESSOR_H

class Processor
{
private:
    string model;
    string clockSpeed;
    string numCore;
    string numThread;

public:
    Processor(string, string, string, string);
    string getModel();
    string getClockSpeed();
    string getNumCore();
    string getNumThread();
};