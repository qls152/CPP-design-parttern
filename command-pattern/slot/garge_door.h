#pragma once

// 增加gargeDoor (仓库门)相应接口

class GargeDoor {
public:
  virtual ~GargeDoor() = default;
  virtual void up() = 0;
  virtual void down() = 0;
  virtual void stop() = 0;
  virtual void lighton() = 0;
  virtual void lightoff() = 0;
};