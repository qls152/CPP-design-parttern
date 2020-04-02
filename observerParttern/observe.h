//
// Created by qinliansong on 2020/4/2.
//

#ifndef OBSERVERPARTTERN_OBSERVE_H
#define OBSERVERPARTTERN_OBSERVE_H

#include "data.h"

class Observe {
public:
    virtual ~Observe() {}
    virtual void update(Data& data) = 0;
};

#endif //OBSERVERPARTTERN_OBSERVE_H
