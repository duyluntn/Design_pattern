#include "WaitingState.h"

WaitringState::WaitringState(RentalRobotInterface *rentalRobot) : mRentalRobot(rentalRobot) {

}

void WaitringState::getForm() {
    mRentalRobot->setState(mRentalRobot->getProcessingState());
    std::cout <<"Thanks for the form.\n";
}

void WaitringState::checkForm() {
    std::cout <<"You have to submit an form.\n";
}

void WaitringState::rentApartment() {
    std::cout <<"Thanks for the form.\n";
}

void WaitringState::dispenseKeys() {
    std::cout <<"You have to submit an form.\n";
}