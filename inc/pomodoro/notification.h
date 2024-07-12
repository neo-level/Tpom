#pragma once
#include <string>

class Notification {
public:
    void notify(const std::string& message);
    void playSound();
};
