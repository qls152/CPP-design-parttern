//
// Created by qinliansong on 2020/4/14.
//

#ifndef DP_WHIP_H
#define DP_WHIP_H

#include "condimentdecorator.h"
#include <memory>

class Whip : public CondimentDecorator {
private:
    std::shared_ptr<Beverage> beverage;

public:
    Whip();
    Whip(const std::shared_ptr<Beverage>& bev);

    virtual ~Whip();
    std::string getDescription() override;
    double cost() override;
};


#endif //DP_WHIP_H
