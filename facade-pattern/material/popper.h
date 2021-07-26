#pragma once

// 此处定义爆米花接口
class Popper {
public:
  virtual ~Popper() = default;
  // 此处接口根据HeadFirst示例总结
  virtual void pop() = 0;
  virtual void on() = 0;
  virtual void off() = 0;
};