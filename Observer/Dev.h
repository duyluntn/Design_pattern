#ifndef DEV_H
#define DEV_H
#include "IObserver.h"
class Dev : public IObserver
{
public:
    Dev();
    void update(string operation, string record) override;
};
#endif