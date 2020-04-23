//
// Created by qinliansong on 2020/4/23.
//

#include "pizzastore.h"

PizzaStore::PizzaStore(const SimplePizzaFactory &factory) : _factory(factory) {

}

PizzaStore::~PizzaStore() {

}

std::unique_ptr<Pizza> PizzaStore::orderPizza(const std::string &type) {
    std::unique_ptr<Pizza> pizza(_factory.creatPizza(type));
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return std::move(pizza);
}