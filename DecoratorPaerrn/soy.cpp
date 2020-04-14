//
// Created by qinliansong on 2020/4/14.
//

#include "soy.h"

Soy::Soy() {

}

Soy::Soy(const std::shared_ptr<Beverage> &bev) : beverage(bev) {

}

Soy::~Soy() {

}

std::string Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}

double Soy::cost() {
    return 0.15 + beverage->cost();
}