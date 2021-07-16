#include "subject/weather_data.h"

void WeatherData::registerObserver(std::shared_ptr<Observer> observer) {
  obeservers_.push_back(std::move(observer));
}

void WeatherData::removeObserver(std::shared_ptr<Observer> observer) {
  obeservers_.remove_if([observer](auto& p) {
    if (auto ptr = p.lock()) {
      return ptr == observer;
    }
    return false;
  });
}

// 此处把状态的更改告知所有观察者
void WeatherData::notifyObservers() {
  std::for_each(obeservers_.begin(), obeservers_.end(), 
                [this](auto&& o) { 
		  if(auto p = o.lock()) { 
		    p->update(temperature_, humidity_, pressure_); 
		  }
		});	
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
   temperature_ = temperature;
   humidity_ = humidity;
   pressure_ = pressure;
}

