
#include <iostream>

void doSomethingM();
void doSomethingP();

void test();

int main()
{
    test(); return 0;

    std::cout << "Hello, World!" << std::endl;
    doSomethingM();
    doSomethingP();
    return 0;
}
