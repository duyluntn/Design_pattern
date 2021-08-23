#ifndef INTERFACE_SUBJECT_H
#define INTERFACE_SUBJECT_H

#include <iostream>
#include "IObserver.h"
using namespace std;

class ISubject
{
public:
    virtual void registerObserver(IObserver *) = 0;
    virtual void removeObserver(IObserver *) = 0;
    virtual void notifyObsever() = 0;
};

#endif