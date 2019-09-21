// 
// Author: qinliansong
// 本次计划利用C++实现HeadFirst中的例子，并试着写单元测试
// 鸭子超类
#ifndef HEADFIRST_DUCK_H
#define HEADFIRST_DUCK_H
#include <iostream>

namespace duck{
    
class BaseDuck {
public:
    void quack();
    void swim();
    // 每个鸭子的外形不一样，
    virtual void display() = 0; 

    virtual ~BaseDuck() {}
};

}
#endif