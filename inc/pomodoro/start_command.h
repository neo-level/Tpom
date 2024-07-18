#pragma once
#include "pomodoro/command.h"

class StartCommand final : public Command {
public:
	StartCommand() = default;
	~StartCommand() override = default;
	void execute(const std::shared_ptr<Pomodoro>& pomodoro) override;
};
