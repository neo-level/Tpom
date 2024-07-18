#include <iostream>
#include <string>
#include <memory>
#include "pomodoro/pomodoro.h"
#include "pomodoro/command.h"
#include "pomodoro/settings.h"
#include "pomodoro/input_handler.h"

int main()
{
	auto settings = Settings::getInstance();
	auto pomodoro = std::make_shared<Pomodoro>(settings);
	auto handler = std::make_unique<InputHandler>();

	std::string command;
	while (true) {
		std::getline(std::cin, command);
		if (command == "exit") {
			break;
		}

		auto handled_command = handler->handleInput(command);
		if (handled_command)
			handled_command->execute(pomodoro);
	}

	return 0;
}
