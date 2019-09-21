//
// Created by qinliansong on 2019-09-21.
//

#include "soy.h"

std::string Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return 0.15 + beverage->cost();
}