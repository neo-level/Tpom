#include "pomodoro/stop_command.h"
#include "pomodoro/pomodoro.h"

void StopCommand::execute(const std::shared_ptr<Pomodoro>& pomodoro)
{
	pomodoro->stop();
}
