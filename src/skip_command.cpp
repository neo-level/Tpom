#include "pomodoro/skip_command.h"
#include "pomodoro/pomodoro.h"

void SkipCommand::execute(const std::shared_ptr<Pomodoro>& pomodoro)
{
	pomodoro->skip();
}