#include "observer/current_conditions_display.h"

#include "subject/subject.h"

#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(std::shared_ptr<Subject> weather_data) 
     : weather_data_(std::move(weather_data)) {
  weather_data_->registerObserver(shared_from_this());
}

void CurrentConditionsDisplay::display() {
  std::cout << "Current Conditions: " << temperature_ << "F degrees and " 
            << humidity_ << "%humidity\n";
}

void CurrentConditionsDisplay::update(float temp, float humidity, float pressure) {
  temperature_ = temp;
  humidity_ = humidity;
  display();
}