#include "Database.h"
#include "Boss.h"
#include "Dev.h"

int main() {
    Database database;
    Boss boss;
    Dev dev;
    database.registerObserver(&boss);
    database.registerObserver(&dev);
    database.notifyObsever();
    database.removeObserver(&dev);
    database.notifyObsever();
}