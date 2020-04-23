//
// Created by qinliansong on 2020/4/23.
//

#ifndef FACTORYPATTERN_PIZZA_H
#define FACTORYPATTERN_PIZZA_H


class Pizza {
public:
    virtual ~Pizza() = 0;
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
};


#endif //FACTORYPATTERN_PIZZA_H
