#pragma once
#include "pomodoro/command.h"

class StopCommand final : public Command {
public:
	StopCommand() = default;
	~StopCommand() override = default;
	void execute(const std::shared_ptr<Pomodoro>& pomodoro) override;
};
