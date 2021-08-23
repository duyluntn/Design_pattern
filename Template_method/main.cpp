#include "CookieRobot.h"
#include "AutomotiveRobot.h"
#include "RobotTemplate.h"

int main() {
    RobotTemplate * ptrRobot;
    AutomotiveRobot autoRobot;
    CookieRobot cookRobot;

    ptrRobot = &autoRobot;
    cout << ptrRobot->getName() << endl;
    ptrRobot->go();

    ptrRobot = &cookRobot;
    cout << ptrRobot->getName() << endl;
    ptrRobot->go();
}