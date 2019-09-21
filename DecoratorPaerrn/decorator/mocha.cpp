//
// Created by qinliansong on 2019-09-21.
//

#include "mocha.h"

double Mocha::cost() {
    return 0.20 + beverage->cost();
}

std::string Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}