//
// Created by qinliansong on 2020/4/14.
//

#include "mocha.h"

Mocha::Mocha() {

}

Mocha::Mocha(const std::shared_ptr<Beverage>& bev) : beverage(bev) {

}

Mocha::~Mocha() {

}

double Mocha::cost() {
    return 0.20 + beverage->cost();
}

std::string  Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}