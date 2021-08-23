#ifndef INTERFACE_OBSERVER_H
#define INTERFACE_OBSERVER_H

#include <iostream>
using namespace std;

class IObserver
{
public:
    virtual void update(string operation, string record) = 0;
};

#endif