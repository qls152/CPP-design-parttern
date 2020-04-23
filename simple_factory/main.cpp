#include "pizzastore.h"
#include <iostream>

int main() {
    SimplePizzaFactory factory;
    PizzaStore pstore(factory);
    auto pizza = pstore.orderPizza("clam");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
