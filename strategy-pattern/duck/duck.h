#pragma once

#include <memory>
#include <iostream>

#include "fly-behavior/fly_behavior.h"
#include "quack-behavior/quack_behavior.h"

class Duck {
private:
  // 为行为接口声明两个引用变量，所有鸭子子类均使用他们
  // 此处按照书上来写，为了方便理解
  // 实则在C++的接口中，尽量不要声明状态
  std::shared_ptr<FlyBehavior> flyBehavior_;
  std::shared_ptr<QuackBehavior> quackBehavior_;

public:
  Duck(std::shared_ptr<FlyBehavior> flyBehavior,
       std::shared_ptr<QuackBehavior> quackBehavior)
    : flyBehavior_(std::move(flyBehavior)),
      quackBehavior_(std::move(quackBehavior)) {} 
  virtual ~Duck() = default;

  virtual void display() = 0;

  void performFly() {
    flyBehavior_->fly();
  }
  
  void performQuack() {
    quackBehavior_->quack();
  }

  void swim() {
    std::cout << "All ducks float, even decoys\n";
  }
 
};