// 
// Author: qinliansong
//
// 绿头鸭类

#include "duck.h"

namespace duck{

class MallardDuck : public BaseDuck {
public:
    void display() override;
    virtual ~MallardDuck() {}
};
}