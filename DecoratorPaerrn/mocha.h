//
// Created by qinliansong on 2020/4/14.
//

#ifndef DP_MOCHA_H
#define DP_MOCHA_H

#include <memory>
#include "condimentdecorator.h"

class Mocha : public CondimentDecorator {
private:
    std::shared_ptr<Beverage> beverage;

public:
    Mocha();
    Mocha(const std::shared_ptr<Beverage>& bev);
    virtual ~Mocha();

    std::string getDescription() override;
    double cost() override;

};


#endif //DP_MOCHA_H
