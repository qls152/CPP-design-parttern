#pragma once

#include <memory>

#include "observer/observer.h"

class Subject {
public:
  // 如下两个方法，需要使用观察者作为一个变量
  // 此处必须用std::shared_ptr, 若使用std::unique_ptr会报错
  virtual void registerObserver(std::shared_ptr<Observer> observer) = 0;
  virtual void removeObserver(std::shared_ptr<Observer> observer) = 0;

  // 当主题改变状态时，调用如下接口
  virtual void notifyObservers() = 0;
};
