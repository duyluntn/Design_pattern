#ifndef RENT_APARTMENT_STATE_h
#define RENT_APARTMENT_STATE_h

#include "State.h"
#include "RentalRobotInterface.h"

class RentApartmentState : public State {
public:
    RentApartmentState(RentalRobotInterface *rentalRobot);
    void getForm();
    void checkForm();
    void rentApartment();
    void dispenseKeys();
private:
    RentalRobotInterface * mRentalRobot;
};

#endif // RENT_APARTMENT_STATE_h