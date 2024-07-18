#pragma once
#include <memory>

class Pomodoro;

class Command {
public:
	virtual ~Command() = default;
	virtual void execute(const std::shared_ptr<Pomodoro>& pomodoro) =0;
};
