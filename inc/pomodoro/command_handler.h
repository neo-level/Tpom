#pragma once
#include <string>
#include <memory>
#include "pomodoro/pomodoro.h"

class CommandHandler {
public:
    explicit CommandHandler(const std::shared_ptr<Pomodoro>& pomodoro);
    void handleCommand(const std::string& command);

private:
    std::shared_ptr<Pomodoro> _pomodoro;
};