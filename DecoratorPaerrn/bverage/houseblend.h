//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__HOUSEBLEND_H
#define HEADFIRST_C__HOUSEBLEND_H


#include "beverage.h"

class HouseBlend : public Beverage {
public:
    HouseBlend() : Beverage("HouseBlend coffee") {}
    virtual ~HouseBlend() {}

    double cost() override ;
};


#endif //HEADFIRST_C__HOUSEBLEND_H
