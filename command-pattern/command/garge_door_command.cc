#include "command/garge_door_command.h"

#include "slot/garge_door.h"

GargeDoorCommand::GargeDoorCommand(std::shared_ptr<GargeDoor> garge_door)
  : garge_door_(std::move(garge_door)) {}

void GargeDoorCommand::execute() {
  garge_door_->up();
}