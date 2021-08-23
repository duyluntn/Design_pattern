#ifndef COOKIE_ROBOT_H
#define COOKIE_ROBOT_H

#include "RobotTemplate.h"

class CookieRobot : public RobotTemplate
{
public:
    CookieRobot();
    void getParts() override;
    void assemble() override;
    void test() override;
    string getName() override;
};

#endif