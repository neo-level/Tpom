#pragma once
#include <chrono>
#include <functional>

class Timer {
public:
    virtual ~Timer() = default;
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void reset() = 0;
    [[nodiscard]] virtual int getRemainingTime() const = 0;
    void setCompletionCallback(const std::function<void()>& callback);

protected:
    std::function<void()> completionCallback;
};
