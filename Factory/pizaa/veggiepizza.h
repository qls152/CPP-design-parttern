//
// Created by qinliansong on 2019-09-22.
//

#ifndef FACTORY_VEGGIEPIZZA_H
#define FACTORY_VEGGIEPIZZA_H


#include "pizza.h"

class VeggiePizza : public Pizza{
public:
    virtual ~VeggiePizza() {}
    void prepare() override ;
    void bake() override ;
    void cut() override ;
    void box() override ;
};


#endif //FACTORY_VEGGIEPIZZA_H
