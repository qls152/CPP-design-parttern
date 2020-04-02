//
// Created by qinliansong on 2019-09-22.
//

#include "pizzastore.h"

std::unique_ptr<Pizza> PizzaStore::orderPizza(const std::string &type) {
    std::unique_ptr<Pizza> pizza;

    pizza = static_cast<std::unique_ptr<Pizza> >(factory.createPizza(type));

   pizza->prepare();
   pizza->bake();
   pizza->cut();
   pizza->box();

    return std::move(pizza);
}
