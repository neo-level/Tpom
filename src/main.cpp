#include <iostream>
#include <string>
#include <memory>
#include "pomodoro/pomodoro.h"
#include "pomodoro/command_handler.h"
#include "pomodoro/settings.h"

int main() {
    auto settings = Settings::getInstance();
    auto pomodoro = std::make_shared<Pomodoro>(settings);
    CommandHandler commandHandler(pomodoro);

    std::string command;
    while (true) {
        std::getline(std::cin, command);
        if (command == "exit") {
            break;
        }
        commandHandler.handleCommand(command);
    }

    return 0;
}