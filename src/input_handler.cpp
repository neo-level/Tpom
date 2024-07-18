#include "pomodoro/input_handler.h"

#include <string>

#include <pomodoro/start_command.h>
#include <pomodoro/stop_command.h>
#include <pomodoro/pause_command.h>
#include <pomodoro/reset_command.h>
#include <pomodoro/skip_command.h>
#include <pomodoro/status_command.h>

std::unique_ptr<Command> InputHandler::handleInput(const std::string& input)
{
	if (input == "start")
		return std::make_unique<StartCommand>();

	if (input == "stop")
		return std::make_unique<StopCommand>();

	if (input == "pause")
		return std::make_unique<PauseCommand>();

	if (input == "reset")
		return std::make_unique<ResetCommand>();

	if (input == "skip")
		return std::make_unique<SkipCommand>();

	if (input == "status")
		return std::make_unique<StatusCommand>();

	return nullptr;
}
