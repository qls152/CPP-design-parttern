#include <iostream>
#include <pizzastore.h>
#include <simplepizzafactory.h>

int main() {
    SimplePizzaFactory factory;
    PizzaStore pstore(factory);

    std::unique_ptr<Pizza> pizza;

    pizza = pstore.orderPizza("veggie");
    return 0;
}