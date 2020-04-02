//
// Created by qinliansong on 2019-09-22.
//

#include "simplepizzafactory.h"

Pizza* SimplePizzaFactory::createPizza(const std::string &type) {
    if (type == "cheese") {
        pizza = new CheesePizza;
    } else if (type == "veggie") {
        pizza = new VeggiePizza;
    }

    return pizza;
}