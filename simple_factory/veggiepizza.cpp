//
// Created by qinliansong on 2020/4/23.
//

#include "veggiepizza.h"
#include <iostream>

VeggiePizza::~VeggiePizza() {

}

void VeggiePizza::prepare() {
    std::cout << "veggiepizza preparing" << std::endl;
}

void VeggiePizza::box() {
    std::cout << "veggiepizza boxing" << std::endl;
}

void VeggiePizza::cut() {
    std::cout << "veggiepizza cuting" << std::endl;
}

void VeggiePizza::bake() {
    std::cout << "Veggiepizza baking" << std::endl;
}