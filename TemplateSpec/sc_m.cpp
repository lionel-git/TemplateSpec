#include <iostream>

#include "sc_m.h"

void doSomethingM()
{
    std::cout << "doSomething() called from m" << std::endl;
    Toto toto;
    toto.doSomethingToto();
    std::cout << toString(Toto::getType<TotoA>()) << std::endl;
    std::cout << toString(Toto::getType<TotoB>()) << std::endl;

}
