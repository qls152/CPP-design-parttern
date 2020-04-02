#include <iostream>
#include "GUmballMachine.h"


int main() {
    GUmballMachine gUmballMachine1(2);
    gUmballMachine1.init();

    gUmballMachine1.insertQuarter();
    gUmballMachine1.turnCrank();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}