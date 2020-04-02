//
// Created by qinliansong on 2019-09-22.
//

#ifndef FACTORY_PIZZASTORE_H
#define FACTORY_PIZZASTORE_H

#include <simplepizzafactory.h>

class PizzaStore {
private:
    SimplePizzaFactory factory;

public:
    PizzaStore(const SimplePizzaFactory& factory)
        : factory(factory) {}

     std::unique_ptr<Pizza> orderPizza(const std::string& type);
};


#endif //FACTORY_PIZZASTORE_H
