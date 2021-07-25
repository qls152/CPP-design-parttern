#include "command/garge_door_off_command.h"

#include "slot/garge_door.h"

GargeDoorOffCommand::GargeDoorOffCommand(std::shared_ptr<GargeDoor> garge_door)
  : garge_door_(std::move(garge_door)) {}

void GargeDoorOffCommand::execute() {
  garge_door_->down();
}