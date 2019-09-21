//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__ESPRESSO_H
#define HEADFIRST_C__ESPRESSO_H


#include "beverage.h"

class Espresso : public Beverage {
public:
    Espresso() : Beverage("Espresso") {}
    virtual ~Espresso() {}

    double cost() override ;
};


#endif //HEADFIRST_C__ESPRESSO_H
