//
// Created by qinliansong on 2019-09-21.
//

#include "whip.h"

std::string Whip::getDescription() {
    return beverage->getDescription() + ", Whip";
}

double Whip::cost() {
    return 0.10 + beverage->cost();
}