//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__CONDIMENTDECORATOR_H
#define HEADFIRST_C__CONDIMENTDECORATOR_H


#include "../bverage/beverage.h"

class CondimentDecorator : public Beverage{
public:
    CondimentDecorator() {}
    virtual  ~CondimentDecorator() {}

    // virtual std::string getDescription() = 0;
};


#endif //HEADFIRST_C__CONDIMENTDECORATOR_H
