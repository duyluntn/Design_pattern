#include "FullyRentedState.h"

FullyApartmentState::FullyApartmentState(RentalRobotInterface* rentalRobot) : mRentalRobot(rentalRobot) {

}

void FullyApartmentState::getForm () {
    std::cout << "Sorry, we're fully rented.\n";
}

void FullyApartmentState::checkForm () {
    std::cout << "Sorry, we're fully rented.\n";
}

void FullyApartmentState::rentApartment () {
    std::cout << "Sorry, we're fully rented.\n";
}

void FullyApartmentState::dispenseKeys () {
    std::cout << "Sorry, we're fully rented.\n";
}