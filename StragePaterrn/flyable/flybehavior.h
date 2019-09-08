//
// Author: qinliansong
//

#ifndef DUCK_FLYBEHAVIOR_H
#define DUCK_FLYBEHAVIOR_H

#include <iostream>

namespace duck {
class FlyBehavior {
public:
    virtual void fly() = 0;
    virtual ~FlyBehavior() {}
};
}

#endif