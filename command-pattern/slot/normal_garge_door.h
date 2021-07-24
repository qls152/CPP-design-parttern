#pragma once

#include "slot/garge_door.h"

// 此处实现正常的仓库门
class NormalGargeDoor : public GargeDoor {
public:
  virtual ~NormalGargeDoor() = default;
  virtual void up() override;
  virtual void down() override;
  virtual void stop() override;
  virtual void lighton() override;
  virtual void lightoff() override;
};