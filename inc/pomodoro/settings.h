#pragma once
#include <chrono>
#include <memory>

class Settings {
public:
    static std::shared_ptr<Settings> getInstance();
    Settings(const Settings&) = delete;
    Settings& operator=(const Settings&) = delete;
    void setPomodoroTime(std::chrono::minutes time);
    void setBreakTime(std::chrono::minutes time);
    void setLongBreakTime(std::chrono::minutes time);
    void setStreakRequirement(int requirement);

    [[nodiscard]] std::chrono::minutes getPomodoroTime() const;
    [[nodiscard]] std::chrono::minutes getBreakTime() const;
    [[nodiscard]] std::chrono::minutes getLongBreakTime() const;
    [[nodiscard]] int getStreakRequirement() const;

private:
    Settings() = default;

    std::chrono::minutes pomodoroTime{25};
    std::chrono::minutes breakTime{5};
    std::chrono::minutes longBreakTime{15};
    int streakRequirement{4};
};
