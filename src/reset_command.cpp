#include "pomodoro/reset_command.h"
#include "pomodoro/pomodoro.h"

void ResetCommand::execute(const std::shared_ptr<Pomodoro>& pomodoro)
{
	pomodoro->reset();
}