#include "observer/current_conditions_display.h"

#include "subject/subject.h"

#include <iostream>

void CurrentConditionsDisplay::display() {
  std::cout << "Current Conditions: " << temperature_ << "F degrees and " 
            << humidity_ << "%humidity\n";
}

void CurrentConditionsDisplay::update(float temp, float humidity, float pressure) {
  temperature_ = temp;
  humidity_ = humidity;
  display();
}