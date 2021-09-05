#include "RentApartmentState.h"

RentApartmentState::RentApartmentState(RentalRobotInterface *rentalRobot) : mRentalRobot(rentalRobot) {

}

void RentApartmentState::getForm() {
    std::cout << "Hang on, we’re renting you an apartment.\n";
}
void RentApartmentState::checkForm() {
    std::cout << "Hang on, we’re renting you an apartment.\n";
}
void RentApartmentState::rentApartment() {
    std::cout << "Renting you an apartment....\n";
    dispenseKeys();
}

void RentApartmentState::dispenseKeys() {
    if (mRentalRobot->mTotalApartment == mRentalRobot->getCount())
    {
        mRentalRobot->setState(mRentalRobot->getFullyRentedState());
        std::cout << "Sorry, we’re fully rented\n";
    }
    else
    {
        mRentalRobot->setState(mRentalRobot->getWaitingState());
        std::cout << "Your Key\n";
        mRentalRobot->setCount(mRentalRobot->getCount() + 1);
    }
}