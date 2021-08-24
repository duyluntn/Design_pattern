#ifndef INTERFACE_FLY_BEHAVIOR_H
#define INTERFACE_FLY_BEHAVIOR_H

#include <iostream>
using namespace std;

class IFlyBehavior
{
public:
    virtual void fly() = 0;
};

#endif