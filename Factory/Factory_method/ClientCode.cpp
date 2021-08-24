#include "ClientCode.h"

ClientCode::ClientCode() {
    DbConnectionFactory * connec = new DbConnectionFactory();
    IConnection *con = connec->createConnection(CONNECTION_TYPE_MYSQL);
    con->initialize();
}

