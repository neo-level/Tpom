#include "pomodoro/start_command.h"
#include "pomodoro/pomodoro.h"

void StartCommand::execute(const std::shared_ptr<Pomodoro>& pomodoro)
{
	pomodoro->start();
}
