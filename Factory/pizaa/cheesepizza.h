//
// Created by qinliansong on 2019-09-22.
//

#ifndef FACTORY_CHEESEPIZZA_H
#define FACTORY_CHEESEPIZZA_H


#include "pizza.h"

class CheesePizza : public Pizza {
public:
    virtual ~CheesePizza() {}
    void prepare() override ;
    void bake() override ;
    void cut() override ;
    void box() override ;

};


#endif //FACTORY_CHEESEPIZZA_H
