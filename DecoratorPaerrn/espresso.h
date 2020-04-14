//
// Created by qinliansong on 2020/4/14.
//

#ifndef DP_ESPRESSO_H
#define DP_ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage {
public:
    Espresso();
    virtual ~Espresso();

    double cost() override;
};


#endif //DP_ESPRESSO_H
