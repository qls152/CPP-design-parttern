#pragma once 

#include "slot/light.h"

// 定义普通台灯slot
class NormalLight : public Light {
public:
  virtual ~NormalLight() override;
  virtual void on() override;
  virtual void off() override;
};
