#pragma once

class QuackBehavior {
public:
  virtual ~QuackBehavior() = default;
  virtual void quack() = 0;
};