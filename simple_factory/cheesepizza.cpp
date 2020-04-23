//
// Created by qinliansong on 2020/4/23.
//

#include "cheesepizza.h"
#include <iostream>

CheesePizza::~CheesePizza() {

}

void CheesePizza::prepare() {
    std::cout << "CheesePizza preparing" << std::endl;
}

void CheesePizza::cut() {
    std::cout << "CheesePizza cutting" << std::endl;
}

void CheesePizza::box() {
    std::cout << "CheesePizza boxing" << std::endl;
}

void CheesePizza::bake() {
    std::cout << "CheesePizza baking" << std::endl;
}






