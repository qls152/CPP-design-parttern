#include "command/lightoff_command.h"
#include "slot/light.h"

LightOffCommand::LightOffCommand(std::shared_ptr<Light> light) 
  : light_(std::move(light)) {}

// 此处参考HeadFirst书中实现
void LightOffCommand::execute() {
   light_->off(); 
}