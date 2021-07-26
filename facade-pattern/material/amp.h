#pragma once

#include <memory>

class Dvd;
// 此处定义amp接口
class Amp {
public:
  virtual ~Amp() = default;
  virtual void setDvd(std::shared_ptr<Dvd> dvd) = 0;
  virtual void setVolume(int nums) = 0;
  virtual void setSurroundSound() = 0;
  virtual void off() = 0;
  virtual void on() = 0;
};