#pragma once

// 此处定义screen接口
class Screen {
public:
  virtual ~Screen() = default;
  virtual void down() = 0;
  virtual void up() = 0;
};