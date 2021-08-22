#include "Singleton.h"
#include <iostream>

int main() {
    Singleton *ptr1 = &Singleton::getInstance();
    Singleton *ptr2 = &Singleton::getInstance();
    if (ptr1 == ptr2)
        std::cout << "oke";
}