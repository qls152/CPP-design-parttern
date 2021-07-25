#pragma once

#include "command/command.h"

// 声明NoCommand命令对象
class NoCommand : public Command {
public:
  virtual ~NoCommand() = default;
  virtual void execute() override;
};