#pragma once
#include "observer/observer.h"

#include <memory>

class Subject;

// 实现当前状况布告板
// 此处采用std::enable_shared_from_this
class CurrentConditionsDisplay : 
                public std::enable_shared_from_this<CurrentConditionsDisplay>,
		public Observer {
public:
  explicit CurrentConditionsDisplay(std::shared_ptr<Subject> weather_data);
  ~CurrentConditionsDisplay() = default;

  virtual void update(float temp, float humidity, float pressure) override;
  virtual void display() override;

private:
  std::shared_ptr<Subject> weather_data_;
  float temperature_{0.0};
  float humidity_{0.0};
};
