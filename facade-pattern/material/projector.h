#pragma once

// 此处定义projector接口
class Projector {
public:
  virtual ~Projector() = default;
  virtual void on() = 0;
  virtual void wideScreenMode() = 0;
  virtual void off() = 0;
};