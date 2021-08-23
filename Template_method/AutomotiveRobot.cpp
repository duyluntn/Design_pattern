#include "AutomotiveRobot.h"

AutomotiveRobot::AutomotiveRobot() {
    cout << "Automotive robot created" << endl;
}

void AutomotiveRobot::getParts() {
    cout << "Automotive robot get parts" << endl;
}

void AutomotiveRobot::assemble() {
    cout << "Automotive robot assemble" << endl;
}

void AutomotiveRobot::test() {
    cout << "Automotive robot tested" << endl;
}

bool AutomotiveRobot::checkproduce() {
    char tem;
    cout << "Do you want test produce?\n";
    cin >> tem;
    if (tem == 'y' || tem == 'Y')
        return true;
    else
        return false;
}

string AutomotiveRobot::getName() {
    return "Automotive robot";
}