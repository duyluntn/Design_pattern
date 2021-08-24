#include "Cor_Duck.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"


int main () {
    Duck * duck = new Cor_Duck();
    duck->setFlyByhavior(new FlyWithWings());
    duck->performFly();
    duck->setFlyByhavior(new FlyNoWay());
    duck->performFly();
}