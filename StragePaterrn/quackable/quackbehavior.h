//
// Author: qinliansong
//

#ifndef DUCK_QUACKBEHAVIOR_H
#define DUCK_QUACKBEHAVIOR_H
#include <iostream>

namespace duck {
class QuackBehavior {
public:
    virtual void quack() = 0;
    virtual ~QuackBehavior() {}
};
}
#endif