#pragma once
#include "pomodoro/command.h"

class ResetCommand final : public Command {
public:
	ResetCommand() = default;
	~ResetCommand() override = default;
	void execute(const std::shared_ptr<Pomodoro>& pomodoro) override;
};
