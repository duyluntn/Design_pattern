#ifndef STATE_h
#define STATE_h
#include <iostream>

class State {
    public:
        virtual void getForm() = 0;
        virtual void checkForm() = 0;
        virtual void rentApartment()= 0;
        virtual void dispenseKeys() = 0;
};

#endif // STATE_h