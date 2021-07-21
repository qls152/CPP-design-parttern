#pragma once

// 本部分实现单例ChocolateBoiler

#include "chocolate_boiler.h"

#include <iostream>

ChocolateBoiler::ChocolateBoiler() {}

ChocolateBoiler& ChocolateBoiler::getInstance() {
  // C++中，该种方式是线程安全的
  static ChocolateBoiler chocolate_boiler;
  return chocolate_boiler;
}

void ChocolateBoiler::boil() {
  if (!empty() && !is_boiled()) {
    std::cout << "Boil the contents of the boiler.\n";
    boil_ = true;
  }
}

void ChocolateBoiler::drain() {
  if (!empty() && is_boiled()) {
    std::cout << "Drain the boiled milk chocolate.\n";
    empty_ = true;
  }
}

const bool ChocolateBoiler::empty() const {
  return empty_;
}

void ChocolateBoiler::fill() {
  if (empty()) {
    empty_ = false;
    boil_ =false;
  }
}

const bool ChocolateBoiler::is_boiled() const {
  return boil_;
}
