#ifndef RENTAL_ROBOT_INTEFACE_h
#define RENTAL_ROBOT_INTEFACE_h

#include "State.h"

class RentalRobotInterface {

public:
    virtual void getForm() = 0;
    virtual void checkForm() = 0;
    virtual void setState(State* state) = 0;
    virtual State *getState()= 0;

    virtual State *getWaitingState()= 0;
    virtual State *getProcessingState()= 0;
    virtual State *getRenApartmentState()= 0;
    virtual State *getFullyRentedState()= 0;

    virtual int getCount()= 0;
    virtual void setCount(int value)= 0;
public:

    int mTotalApartment;
};
#endif // RENTAL_ROBOT_INTEFACE_h