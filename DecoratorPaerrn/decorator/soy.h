//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__SOY_H
#define HEADFIRST_C__SOY_H


#include "condimentdecorator.h"

#include <memory>

class Soy : public CondimentDecorator {
private:
    Beverage* beverage;
public:
    Soy() {}
    Soy(Beverage* beverage) {
        this->beverage = beverage;
    }
    virtual ~Soy() {}

    std::string getDescription() override ;
    double cost() override ;
};


#endif //HEADFIRST_C__SOY_H
