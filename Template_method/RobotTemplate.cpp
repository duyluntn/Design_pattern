#include "RobotTemplate.h"

void RobotTemplate::start() {
    cout << "Start!" << endl;
}

bool RobotTemplate::checkproduce() {
    return true;
}

void RobotTemplate::stop() {
    cout << "Stop!" << endl;
}

void RobotTemplate::go() {
    start();
    getParts();
    assemble();
    if (checkproduce())
        test();
    stop();
}