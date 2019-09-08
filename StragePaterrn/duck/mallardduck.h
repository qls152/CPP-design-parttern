// 
// Author: qinliansong
//
// 绿头鸭类

#include "duck/duck.h"
#include "flyable/flywithwings.h"
#include "quackable/quack.h"

namespace duck{

class MallardDuck : public BaseDuck {
public:
    MallardDuck() 
    : BaseDuck(
            std::unique_ptr<FlyBehavior>(new FlyWithWings),
            std::unique_ptr<QuackBehavior>(new Quack)) {
         
    }
    void display() override;
    virtual ~MallardDuck() {}
};
}