//
// Created by qinliansong on 2020/4/14.
//

#ifndef DP_HOUSEBLEND_H
#define DP_HOUSEBLEND_H

#include "beverage.h"

class Houseblend : public Beverage {
public:
    Houseblend();
    virtual ~Houseblend();
    double cost() override;
};


#endif //DP_HOUSEBLEND_H
