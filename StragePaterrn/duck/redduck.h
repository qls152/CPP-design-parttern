//
// Author: qinliansong
//

#include "duck.h"

namespace duck {

class RedDuck : public BaseDuck {
public:
    void display() override;
    virtual ~RedDuck() {}
};
}