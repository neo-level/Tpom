#include "pomodoro/status_command.h"
#include "pomodoro/pomodoro.h"

void StatusCommand::execute(const std::shared_ptr<Pomodoro>& pomodoro)
{
	pomodoro->showStatus();
}
