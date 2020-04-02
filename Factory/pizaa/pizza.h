//
// Created by qinliansong on 2019-09-22.
//

#ifndef FACTORY_PIZZA_H
#define FACTORY_PIZZA_H

#include <iostream>

class Pizza {
public:
    virtual ~Pizza() {}
    virtual void prepare() = 0;
    virtual void bake();
    virtual void cut();
    virtual void box();

};


#endif //FACTORY_PIZZA_H
