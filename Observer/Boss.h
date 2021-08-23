#ifndef BOSS_H
#define BOSS_H
#include "IObserver.h"
class Boss :public IObserver
{
public:
    Boss();
    void update(string operation, string record) override;
};

#endif