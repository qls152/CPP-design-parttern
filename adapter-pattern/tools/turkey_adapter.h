#pragma once

#include "tools/duck.h"

#include <memory>

// 此类便是适配器模式的关键实现，主要是实现相应鸭子的接口
// 且适配火鸡的接口
class Turkey;
class TurkeyAdapter : public Duck {
private:
  std::shared_ptr<Turkey> turkey_{};
public:
  explicit TurkeyAdapter(std::shared_ptr<Turkey> turkey);
  virtual void quack() override;
  virtual void fly() override;
};