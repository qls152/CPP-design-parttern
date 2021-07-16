#pragma once

#include "subject/subject.h"

#include <list>

// 模拟HeadFirst中的WeatherData类
class WeatherData : public Subject {
public:
  WeatherData() = default;
  ~WeatherData() = default;

  virtual void registerObserver(std::shared_ptr<Observer> observer) override;
  virtual void removeObserver(std::shared_ptr<Observer> observer) override;
  virtual void notifyObservers() override;
  
  void measurementsChanged() {
    notifyObservers(); 
  }
  
  // note: 此接口，理论上可以放在Base Class中，以利用面向接口编程的设计原则
  // 此处为了吻合书中所写，故也放在该类中
  void setMeasurements(float temperature, float humidity, float pressure);

private:
  // 注意，此处为了方便编写，偷懒直接用书上，其实可以将其归为一个结构中
  // 可以使用pb等
  float temperature_{0.0};
  float humidity_{0.0};
  float pressure_{0.0};
  
  // 此处利用weak_ptr, 防止循环引用
  std::list<std::weak_ptr<Observer> > obeservers_;
};