#pragma once

#include "command/command.h"

#include <memory>

class Light;
// 声明LightOffCommand对象，将Light的请求封装
class LightOffCommand : public Command {
private:
  std::shared_ptr<Light> light_;

public:
  explicit LightOffCommand(std::shared_ptr<Light> light);
  virtual ~LightOffCommand() = default;
  virtual void execute() override;
};