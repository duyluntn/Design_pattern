#ifndef FULLY_APARTMENT_STATE_h
#define FULLY_APARTMENT_STATE_h

#include "State.h"
#include "RentalRobotInterface.h"

class FullyApartmentState : public State {
public:

    FullyApartmentState(RentalRobotInterface *rentalRobot);
    void getForm();
    void checkForm();
    void rentApartment();
    void dispenseKeys();
private:
    RentalRobotInterface * mRentalRobot;
};

#endif // FULLY_APARTMENT_STATE_h