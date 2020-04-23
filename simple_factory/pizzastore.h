//
// Created by qinliansong on 2020/4/23.
//

#ifndef FACTORYPATTERN_PIZZASTORE_H
#define FACTORYPATTERN_PIZZASTORE_H

#include <bits/unique_ptr.h>
#include "simplepizzafactory.h"

class PizzaStore {
private:
    SimplePizzaFactory _factory;
public:
    PizzaStore(const SimplePizzaFactory& factory);
    ~PizzaStore();
    std::unique_ptr<Pizza> orderPizza(const std::string& type);


};


#endif //FACTORYPATTERN_PIZZASTORE_H
