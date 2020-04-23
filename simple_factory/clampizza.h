//
// Created by qinliansong on 2020/4/23.
//

#ifndef FACTORYPATTERN_CLAMPIZZA_H
#define FACTORYPATTERN_CLAMPIZZA_H

#include "pizza.h"

class ClamPizza : public Pizza {
public:
    virtual ~ClamPizza();
    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;
};


#endif //FACTORYPATTERN_CLAMPIZZA_H
