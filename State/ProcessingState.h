#ifndef PROCESSING_STATE_h
#define PROCESSING_STATE_h

#include "State.h"
#include "RentalRobotInterface.h"

class ProcessingState : public State {
public:
    ProcessingState(RentalRobotInterface *rentalRobot);
    void getForm();
    void checkForm();
    void rentApartment();
    void dispenseKeys();
private:
    RentalRobotInterface * mRentalRobot;
};

#endif // PROCESSING_STATE_h