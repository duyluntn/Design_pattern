#include "RentalRobot.h"
#include "WaitingState.h"
#include "ProcessingState.h"
#include "RentApartmentState.h"
#include "FullyRentedState.h"

RentalRobot::RentalRobot (int totalApartment) {
    waitingState = new WaitringState(this);
    processingState = new ProcessingState(this);
    rentApartmentState = new RentApartmentState(this);
    fullRentedState = new FullyApartmentState(this);
    currentState = waitingState;
    mTotalApartment = totalApartment;
    mCount = 0;
}

void RentalRobot::getForm() {
    currentState->getForm();
}

void RentalRobot::checkForm() {
    currentState->checkForm();
}

void RentalRobot::setState(State *state) {
    currentState = state;
}

State * RentalRobot::getState() {
    return currentState;
}

State *RentalRobot::getWaitingState() {
    return waitingState;
}

State *RentalRobot::getProcessingState() {
    return processingState;
}

State *RentalRobot::getRenApartmentState() {
    return rentApartmentState;
}

State *RentalRobot::getFullyRentedState() {
    return fullRentedState;
}

int RentalRobot::getCount() {
    return mCount;
}

void RentalRobot::setCount(int value) {
    mCount = value;
}