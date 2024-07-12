#include <memory>
#include <vector>
#include "pomodoro/timer.h"
#include "pomodoro/notification.h"
#include "pomodoro/settings.h"

#pragma once

class Pomodoro {
public:
    explicit Pomodoro(const std::shared_ptr<Settings> &settings);
    void start();
    void pause();
    void stop();
    void reset();
    void skip();
    void showStatus() const;
    void handleCommand(const std::string& command);

private:
    std::unique_ptr<Timer> currentTimer;
    std::unique_ptr<Notification> notification;
    std::shared_ptr<Settings> settings;
    int pomodoroCount{};
    int streak{};

    void createNextTimer();
    void onTimerComplete();
};
