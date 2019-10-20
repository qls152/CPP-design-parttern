// 
// Author: qinliansong
// 本次计划利用C++实现HeadFirst中的例子，并试着写单元测试
// 鸭子超类
#ifndef HEADFIRST_DUCK_H
#define HEADFIRST_DUCK_H
#include <iostream>
#include <memory>
#include "../flyable/flybehavior.h"
#include "../quackable/quackbehavior.h"

namespace duck{
    
class BaseDuck {
public:
    BaseDuck() = default;
    BaseDuck(
        std::unique_ptr<FlyBehavior> fly,
        std::unique_ptr<QuackBehavior> qua)
        : flybehavior(std::move(fly)), quackbehavior(std::move(qua)){
         
    }
    void performQuack();
    void performFly();
    void swim();

    // 每个鸭子的外形不一样，
    virtual void display() = 0; 

    virtual ~BaseDuck() {}
private:
    std::unique_ptr<FlyBehavior> flybehavior;
    std::unique_ptr<QuackBehavior> quackbehavior;

};

}
#endif