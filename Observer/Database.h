#ifndef DATA_BASE_H
#define DATA_BASE_H

#include "ISubject.h"
#include <vector>
using namespace std;
class Database
{
private:
    vector<IObserver *> observerList;
public:
    Database();
    void registerObserver(IObserver *);
    void removeObserver(IObserver *);
    void notifyObsever();

};

#endif // DATA_BASE_H
