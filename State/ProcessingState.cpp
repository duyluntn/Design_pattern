#include "ProcessingState.h"
#include <cstdlib>

ProcessingState::ProcessingState(RentalRobotInterface *rentalRobot) : mRentalRobot(rentalRobot) {

}

void ProcessingState::getForm () {
    std::cout << "We already got your form.\n";
}

void ProcessingState::checkForm() {
    std::cout << "Processing data" << std::endl;
    int num = rand() % 2;
    if (num == 1){
        std::cout << "Congratulations, you were approved.\n";
        mRentalRobot->setState(mRentalRobot->getRenApartmentState());
        mRentalRobot->getState()->rentApartment();
    } else {
        std::cout << "Sorry, you were not approved.\n";
        mRentalRobot->setState(mRentalRobot->getWaitingState());
    }
}

void ProcessingState::rentApartment () {
    std::cout << "You must have your form checked.\n";
}

void ProcessingState::dispenseKeys () {
    std::cout << "You must have your form checked.\n";
}