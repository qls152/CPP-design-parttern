//
// Created by qinliansong on 2020/4/23.
//

#include "clampizza.h"
#include <iostream>

ClamPizza::~ClamPizza() {

}

void ClamPizza::box() {
    std::cout << "clampizza boxing" << std::endl;
}

void ClamPizza::bake() {
    std::cout << "clampizza baking" << std::endl;
}

void ClamPizza::prepare() {
    std::cout << "clampizza preparing" << std::endl;
}

void ClamPizza::cut() {
    std::cout << "clampizza cutting" << std::endl;
}