#include "Boss.h"

Boss::Boss() {
    cout << "Boss created" << endl;
}

void Boss::update(string operation, string record) {
    cout << "Boss update: " << " operation: " << operation<< " record: " << record << endl;
}