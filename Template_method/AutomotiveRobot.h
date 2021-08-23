#ifndef AUTOMOTIVE_ROBOT_H
#define AUTOMOTIVE_ROBOT_H

#include "RobotTemplate.h"

class AutomotiveRobot : public RobotTemplate
{
public:
    AutomotiveRobot();
    void getParts() override;
    void assemble() override;
    void test() override;
    bool checkproduce() override;
    string getName() override;
};

#endif