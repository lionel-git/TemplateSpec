#include <iostream>

#include "sc_m.h"

void doSomethingM()
{
    std::cout << "doSomething() called from m" << std::endl;
    Toto toto;
    toto.doSomethingToto();
    std::cout << toString(getType<TotoA>()) << std::endl;
    std::cout << toString(getType<TotoB>()) << std::endl;
    // Will cause a compile-time error due to static_assert in the primary template
    //std::cout << toString(getType<TotoNoSpec>()) << std::endl;
}
