#pragma once

#include <memory>

class Command;

class InputHandler {
public:
	std::unique_ptr<Command> handleInput(const std::string& input);
};
