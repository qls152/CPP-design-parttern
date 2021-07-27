#pragma once

// 此处定义带有hook的模版方法模式相关的基类
// 子类可以自定义hook
// 主要是基于多态来完成模版方法模式

class CaffeineBeverageWithHook {
public:
  virtual ~CaffeineBeverageWithHook() = default;
  virtual void brew() = 0;
  virtual void addCondiments() = 0;
  // 该接口为hook接口，默认返回false，子类可以自定义
  virtual bool customWantsCondiments() {
    return false;
  }
  
  // 子类继承该实现
  // 这也是模版方法模式
  void prepareReciep();

private:
  // 子类继承实现
  void boilWater();
  void pourInCup();
};