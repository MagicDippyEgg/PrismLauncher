#pragma once

#include "Task.h"
#include <functional>

class LambdaTask : public Task {
    Q_OBJECT
public:
    using Lambda = std::function<bool()>;

    LambdaTask(Lambda lambda, const QString& status = "")
        : Task(), m_lambda(lambda)
    {
        setStatus(status);
    }

protected:
    void executeTask() override
    {
        if (m_lambda()) {
            emitSucceeded();
        } else {
            emitFailed();
        }
    }

private:
    Lambda m_lambda;
};
