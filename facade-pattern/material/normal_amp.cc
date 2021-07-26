#include "material/dvd.h"
#include "material/normal_amp.h"

#include <iostream>

void NormalAmp::off() {
  std::cout << "Normal Amp off.\n";
}

void NormalAmp::setDvd(std::shared_ptr<Dvd> dvd) {
  dvd_ = std::move(dvd);
}

void NormalAmp::setSurroundSound() {
  std::cout << "Normal Amp set surround sound.\n";
  dvd_->on();
}

void NormalAmp::setVolume(int nums) {
  std::cout << "Normal Amp set volume is " << nums << ".\n";
}

void NormalAmp::on() {
  std::cout << "Normal Amp on...\n";
}