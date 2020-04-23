//
// Created by qinliansong on 2020/4/23.
//

#include "simplepizzafactory.h"
#include "cheesepizza.h"
#include "veggiepizza.h"
#include "clampizza.h"

SimplePizzaFactory::SimplePizzaFactory() : pizza(nullptr) {

}

SimplePizzaFactory::~SimplePizzaFactory() {

}

Pizza * SimplePizzaFactory::creatPizza(const std::string &type) {
    if (type == "cheese") {
        pizza = new CheesePizza;
    } else if (type == "veggie") {
        pizza = new VeggiePizza;
    } else if (type == "clam") {
        pizza = new ClamPizza;
    }
    return pizza;
}