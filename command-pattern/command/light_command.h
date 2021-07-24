#pragma once

#include "command/command.h"

#include <memory>


class Light;

// 声明LightCommand对象，将Light的请求封装
class LightCommand : public Command {
private:
  std::shared_ptr<Light> light_;

public:
  explicit LightCommand(std::shared_ptr<Light> light);
  virtual ~LightCommand() = default;
  virtual void execute() override;
};