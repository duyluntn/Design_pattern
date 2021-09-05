#ifndef RENTAL_ROBOT_h
#define RENTAL_ROBOT_h

#include "RentalRobotInterface.h"
#include "State.h"

class RentalRobot : public RentalRobotInterface {
public:
    RentalRobot(int totalApartment);
    void getForm() override ;
    void checkForm() override;
    void setState(State *state) override;
    State *getState() override;

    State *getWaitingState() override;
    State *getProcessingState() override;
    State *getRenApartmentState() override;
    State *getFullyRentedState() override;

    int getCount();
    void setCount(int value);
private:
    State *currentState;
    State *waitingState;
    State *processingState;
    State *rentApartmentState;
    State *fullRentedState;
    int mCount;
};



#endif // RENTAL_ROBOT_h