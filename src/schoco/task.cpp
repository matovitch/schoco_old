#include "schoco/task.hpp"

#include "schoco/context_switch.hpp"
#include "schoco/scheduler.hpp"

namespace schoco
{

namespace task
{

Abstract::Abstract(Scheduler& scheduler) :
    _scheduler {scheduler}
{}

Abstract::~Abstract() {}

} // namespace task

} // namepsace schoco
