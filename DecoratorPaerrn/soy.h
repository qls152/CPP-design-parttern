//
// Created by qinliansong on 2020/4/14.
//

#ifndef DP_SOY_H
#define DP_SOY_H

#include "condimentdecorator.h"
#include <memory>

class Soy : public Beverage {
private:
    std::shared_ptr<Beverage> beverage;

public:
    Soy();
    Soy(const std::shared_ptr<Beverage>& bev);
    virtual ~Soy();
    std::string getDescription() override;
    double cost() override;
};


#endif //DP_SOY_H
