#include "material/normal_dvd.h"

#include <iostream>

void NormalDvd::eject() {
  std::cout << "Normal Dvd eject.\n";
}

void NormalDvd::off() {
  std::cout << "Normal Dvd off.\n";
}

void NormalDvd::on() {
  std::cout << "Normal Dvd on.\n";
}

void NormalDvd::play(const std::string_view movie) {
  std::cout << "Normal Dvd is playing " << movie << ".\n";
}

void NormalDvd::stop() {
  std::cout << "Normal Dvd stop.\n";
}