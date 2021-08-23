#ifndef ROBOT_TEMPLATE_H
#define ROBOT_TEMPLATE_H

#include <iostream>
#include <string>
using namespace std;

class RobotTemplate
{
public:
    void go();
    void start ();
    virtual void getParts() = 0;
    virtual void assemble() = 0;
    virtual void test() = 0;
    void stop();
    virtual bool checkproduce();
    virtual string getName() = 0;
};

#endif