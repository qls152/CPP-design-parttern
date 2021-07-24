#pragma once
#include "command/command.h"

#include <memory>

// 增加GargeDoorCommand 命令对象
class GargeDoor;
class GargeDoorCommand : public Command {
private:
  std::shared_ptr<GargeDoor> garge_door_{};

public:
  explicit GargeDoorCommand(std::shared_ptr<GargeDoor> garge_door);
  virtual void execute() override;
};