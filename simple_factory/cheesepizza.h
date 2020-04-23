//
// Created by qinliansong on 2020/4/23.
//

#ifndef FACTORYPATTERN_CHEESEPIZZA_H
#define FACTORYPATTERN_CHEESEPIZZA_H

#include "pizza.h"

class CheesePizza : public Pizza {
public:
    virtual ~CheesePizza();
    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;
};


#endif //FACTORYPATTERN_CHEESEPIZZA_H
