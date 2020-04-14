//
// Created by qinliansong on 2020/4/14.
//

#include "espresso.h"

Espresso::Espresso() : Beverage("Espresso") {

}

Espresso::~Espresso() {

}

double Espresso::cost() {
    return 1.99;
}