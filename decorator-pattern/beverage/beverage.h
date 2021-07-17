#pragma once

#include <string>

// 定义饮料基类
// 为了参考书本，方便理解，本部分不做更改
// C++中一般最好不要在抽象类中定义状态
class Beverage {
public:
   Beverage(std::string description) 
     : description_(description) {}
     
   virtual double cost() = 0;
   
   // 此接口声明为虚接口，派生类可实现，可不实现
   virtual std::string getDescription() {
     return description_;
   }

private:
   std::string description_{"Unknown Beverage"};
  
};

// 声明调料装饰者, 装饰者必须和被装饰者从属同一个类型
using CondimentDecorator = Beverage;