#pragma once

// 该目录下实现各个插槽的具体对象
// 声明Light接口
class Light {
public:
  virtual ~Light() = default;
  // 台灯具有关/开两个接口
  virtual void on() = 0;
  virtual void off() = 0;
};