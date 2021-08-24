#ifndef INTERFACE_CONNECTION_H
#define INTERFACE_CONNECTION_H

#include <string>
#include <iostream>

using namespace std;

class IConnection
{
public:
    virtual string description() = 0;
    virtual void setDbName(string dbName) = 0;
    virtual void setUsername(string username) = 0;
    virtual void setPassword(string password) = 0;
    virtual bool initialize() = 0;
};

#endif