#include "command/light_command.h"
#include "slot/light.h"

LightCommand::LightCommand(std::shared_ptr<Light> light) 
  : light_(std::move(light)) {}

// 此处参考HeadFirst书中实现
void LightCommand::execute() {
   light_->on(); 
}