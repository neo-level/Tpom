#pragma once
#include "pomodoro/command.h"

class StatusCommand final : public Command {
public:
	StatusCommand() = default;
	~StatusCommand() override = default;
	void execute(const std::shared_ptr<Pomodoro>& pomodoro) override;
};
