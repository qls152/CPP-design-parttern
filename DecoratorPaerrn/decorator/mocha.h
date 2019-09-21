//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__MOCHA_H
#define HEADFIRST_C__MOCHA_H


#include "condimentdecorator.h"

#include <memory>

class Mocha : public CondimentDecorator {
private:
    Beverage* beverage;

public:
    Mocha() {}
    Mocha(Beverage* beverage)  {
        this->beverage = beverage;
    }
    virtual  ~Mocha() {}

    std::string getDescription() override ;
    double cost() override ;

};


#endif //HEADFIRST_C__MOCHA_H
