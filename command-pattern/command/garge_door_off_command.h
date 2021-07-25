#pragma once
#include "command/command.h"

#include <memory>

// 增加GargeDoorOffCommand 命令对象
class GargeDoor;
class GargeDoorOffCommand : public Command {
private:
  std::shared_ptr<GargeDoor> garge_door_{};

public:
  explicit GargeDoorOffCommand(std::shared_ptr<GargeDoor> garge_door);
  virtual void execute() override;
};