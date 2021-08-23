#include "Database.h"
#include <algorithm>

Database::Database(/* args */)
{
    cout << "data base created!" << endl;
}

void Database::registerObserver(IObserver *observer) {
    std::vector<int>::iterator it;
    if (find(observerList.begin(), observerList.end(), observer) == observerList.end())
    {
        observerList.push_back(observer);
    }
}

void Database::removeObserver(IObserver *observer) {
    std::vector<IObserver *>::iterator it;

    it = find(observerList.begin(), observerList.end(), observer);
    observerList.erase(it);
}

void Database::notifyObsever() {
    for (int i = 0; i < observerList.size(); ++i) {
        observerList[i]->update("Data change", "hehe");
    }
}