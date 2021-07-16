#pragma once

class Observer {
public:
  // 所有观察者实现该接口
  virtual void update(float temp, float humidity, float pressure) = 0;

  // HeadFirst书中将该接口放在一个单独java interface class，本部分
  // 直接将其放在观察者抽象类中，避免多继承
  virtual void display() = 0;

};
