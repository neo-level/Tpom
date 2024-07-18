#include "pomodoro/pause_command.h"
#include "pomodoro/pomodoro.h"

void PauseCommand::execute(const std::shared_ptr<Pomodoro>& pomodoro)
{
	pomodoro->pause();
}
