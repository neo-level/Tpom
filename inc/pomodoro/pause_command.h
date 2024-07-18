#pragma once
#include "pomodoro/command.h"

class PauseCommand final : public Command {
public:
	PauseCommand() = default;
	~PauseCommand() override = default;
	void execute(const std::shared_ptr<Pomodoro>& pomodoro) override;
};
