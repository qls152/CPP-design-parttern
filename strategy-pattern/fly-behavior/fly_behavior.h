#pragma once

class FlyBehavior {
public:
  virtual ~FlyBehavior() = default;
  virtual void fly() = 0;
};