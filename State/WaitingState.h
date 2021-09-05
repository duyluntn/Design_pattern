#ifndef WAITING_STATE_h
#define WAITING_STATE_h

#include "State.h"
#include "RentalRobotInterface.h"

class WaitringState : public State {
public:
    WaitringState(RentalRobotInterface * rentalRobot);
    void getForm();
    void checkForm();
    void rentApartment();
    void dispenseKeys();
private:
    RentalRobotInterface * mRentalRobot;
};

#endif // WAITING_STATE_h