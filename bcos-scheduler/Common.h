#pragma once

namespace bcos::scheduler
{
#define SCHEDULER_LOG(LEVEL) BCOS_LOG(LEVEL) << LOG_BADGE("SCHEDULER")

enum SchedulerError
{
    UnknownError = -70000,
    WrongStatus,
};

}  // namespace bcos::scheduler