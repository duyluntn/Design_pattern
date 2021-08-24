#include "Duck.h"

Duck::Duck() {

}

void Duck::setFlyByhavior(IFlyBehavior *flyBehavior) {
    mFlyBehavior = flyBehavior;
}

void Duck::performFly() {
    mFlyBehavior->fly();
}

string Duck::getName() {
    return mName;
}