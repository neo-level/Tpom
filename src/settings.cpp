#include "pomodoro/settings.h"

std::shared_ptr<Settings> Settings::getInstance() {
    static std::shared_ptr<Settings> instance{new Settings};
    return instance;
}

void Settings::setPomodoroTime(std::chrono::minutes time) {

}

void Settings::setBreakTime(std::chrono::minutes time) {

}

void Settings::setLongBreakTime(std::chrono::minutes time) {

}

void Settings::setStreakRequirement(int requirement) {

}

std::chrono::minutes Settings::getPomodoroTime() const {
    return std::chrono::minutes();
}

std::chrono::minutes Settings::getBreakTime() const {
    return std::chrono::minutes();
}

std::chrono::minutes Settings::getLongBreakTime() const {
    return std::chrono::minutes();
}

int Settings::getStreakRequirement() const {
    return 0;
}


