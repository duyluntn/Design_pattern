#ifndef DUCK_H
#define DUCK_H

#include "IFlyBehavior.h"

class Duck
{
private:
    IFlyBehavior *mFlyBehavior;
    string mName;
public:
    Duck();
    void setFlyByhavior(IFlyBehavior *flyBehavior);
    virtual void display() = 0;
    void performFly();
    string getName();
};

#endif