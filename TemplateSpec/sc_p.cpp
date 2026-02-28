#include "sc_m.h"
#include "sc_p.h"

#include <iostream>

void doSomethingP()
{
    std::cout << "doSomething() called from pfol" << std::endl;
    Toto toto;
    toto.doSomethingToto();
    std::cout << toString(TypeChecker::getType<TotoA>()) << std::endl;
    std::cout << toString(TypeChecker::getType<TotoB>()) << std::endl;
}
