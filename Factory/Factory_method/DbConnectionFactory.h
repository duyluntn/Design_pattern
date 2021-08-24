#ifndef DBCONNECTION_FACTORY_H
#define DBCONNECTION_FACTORY_H
#include "Connection.h"
enum eConnectionType
{
    CONNECTION_TYPE_SQLSERVER,
    CONNECTION_TYPE_MYSQL,
    CONNECTION_TYPE_DEFAULT
};
class DbConnectionFactory
{
private:
    IConnection *connection;
public:
    DbConnectionFactory(/* args */){};
    IConnection * createConnection(eConnectionType connectType) {
        IConnection * connect;
        switch (connectType)
        {
        case CONNECTION_TYPE_SQLSERVER:
            connect = new SqlConnection();
            break;
        case CONNECTION_TYPE_MYSQL:
            connect = new MysqlConnection();
            break;
        default:
            connect = new MysqlConnection();
            break;
        }
        return connect;
    }

};


#endif