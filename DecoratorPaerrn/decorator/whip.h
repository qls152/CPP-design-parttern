//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__WHIP_H
#define HEADFIRST_C__WHIP_H


#include "condimentdecorator.h"

#include <memory>

class Whip : public CondimentDecorator {
private:
    Beverage* beverage;

public:
    Whip() {}
    Whip(Beverage* beverage) {
        this->beverage = beverage;
    }
    virtual ~Whip() {}
    std::string getDescription() override ;
    double cost() override ;
};


#endif //HEADFIRST_C__WHIP_H
