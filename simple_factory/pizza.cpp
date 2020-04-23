//
// Created by qinliansong on 2020/4/23.
//

#include "pizza.h"
#include <iostream>

Pizza::~Pizza() {

}

void Pizza::bake() {
    std::cout << "baking" << std::endl;
}

void Pizza::box() {
    std::cout << "boxing" << std::endl;
}

void Pizza::cut() {
    std::cout << "cutting" << std::endl;
}

void Pizza::prepare() {
    std::cout << "preparing" << std::endl;
}