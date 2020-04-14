//
// Created by qinliansong on 2020/4/14.
//

#include "whip.h"

Whip::Whip() {

}

Whip::Whip(const std::shared_ptr<Beverage> &bev) : beverage(bev) {

}

Whip::~Whip() {

}

std::string Whip::getDescription() {
    return beverage->getDescription() + ", Whip";
}

double Whip::cost() {
    return 0.10 + beverage->cost();
}