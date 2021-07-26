#pragma once

#include <string>

//此处定义Dvd接口
class Dvd {
public:
  virtual ~Dvd() = default;
  virtual void on() = 0;
  virtual void play(const std::string_view movie) = 0;
  virtual void stop() = 0;
  virtual void eject() = 0;
  virtual void off() = 0;
};