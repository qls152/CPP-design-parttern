//
// Created by qinliansong on 2020/4/23.
//

#ifndef FACTORYPATTERN_VEGGIEPIZZA_H
#define FACTORYPATTERN_VEGGIEPIZZA_H

#include "pizza.h"

class VeggiePizza : public Pizza {
public:
    virtual ~VeggiePizza();
    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;
};


#endif //FACTORYPATTERN_VEGGIEPIZZA_H
