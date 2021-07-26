#pragma once

// 此处定义lights接口
class Lights {
public:
  virtual ~Lights() = default;
  virtual void dim(int percent) = 0;
  virtual void on() = 0;
};