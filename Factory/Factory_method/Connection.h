#ifndef CONNECTION_H
#define CONNECTION_H
#include "IConnection.h"

class SqlConnection : public IConnection
{
private:
    string m_name;
    string m_user;
    string m_password;
public:
    SqlConnection(){};
    string description() {
        return "SQL connection";
    }
    bool initialize() {
        cout << "sql inited!" << endl;
        return true;
    }
    void setDbName(string dbName) {
        m_name = dbName;
    }
    void setUsername(string username) {
        m_user = username;
    }
    void setPassword(string password) {
        m_password = password;
    }
};

class MysqlConnection : public IConnection
{
private:
    string m_name;
    string m_user;
    string m_password;
public:
    MysqlConnection(){};
    string description() {
        return "MySQL connection";
    }
    bool initialize() {
        cout << "MYsql inited!" << endl;
        return true;
    }
    void setDbName(string dbName) {
        m_name = dbName;
    }
    void setUsername(string username) {
        m_user = username;
    }
    void setPassword(string password) {
        m_password = password;
    }
};


#endif