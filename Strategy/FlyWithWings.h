#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "IFlyBehavior.h"

class FlyWithWings : public IFlyBehavior
{
public:
    void fly() override;
};

#endif