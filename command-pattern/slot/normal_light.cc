#include "slot/normal_light.h"

#include <iostream>

NormalLight::~NormalLight() {}

void NormalLight::off() {
  std::cout << "turn off normal light.\n";
}

void NormalLight::on() {
  std::cout << "turn on normal light.\n";
}