#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

#define DEFINE_SINGLETON(class)                                                                                        \
    class * class::instance = NULL;                                                                                    \
    int class::mCreate = 0;

#define DECLARE_SINGLETON(class)                                                                                       \
private: static class * instance;                                                                                      \
public: static int mCreate;                                                                                            \
public: static class & getInstance()                                                                                   \
{                                                                                                                      \
    if (mCreate == 0) {                                                                                                \
        mCreate = 1;                                                                                                   \
        if (instance == NULL) {                                                                                        \
            instance = new class();                                                                                    \
        }                                                                                                              \
    } else {                                                                                                           \
        if (instance == NULL) {                                                                                        \
            std::cout << "[" << __FILE__ << " " << __LINE__ << "]" << " Singleton Error \n";                           \
        }                                                                                                              \
    }                                                                                                                  \
    return *instance;                                                                                                  \
}                                                                                                                      \
static void deleteInstance(void) { delete instance; instance = NULL; }

class Singleton
{
public:
    DECLARE_SINGLETON(Singleton)
};

#endif