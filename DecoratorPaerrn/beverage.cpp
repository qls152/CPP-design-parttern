//
// Created by qinliansong on 2020/4/14.
//

#include "beverage.h"
Beverage::Beverage() : description("Unknown Beverage") {

}

Beverage::Beverage(const std::string &des) : description(des) {

}

std::string Beverage::getDescription() {
    return description;
}

Beverage::~Beverage() { }