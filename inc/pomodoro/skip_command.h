#pragma once
#include "pomodoro/command.h"

class SkipCommand final : public Command {
public:
	SkipCommand() = default;
	~SkipCommand() override = default;
	void execute(const std::shared_ptr<Pomodoro>& pomodoro) override;
};
