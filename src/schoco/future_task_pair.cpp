#include "schoco/future_task_pair.hpp"

namespace schoco
{

FutureTaskPair::FutureTaskPair(future::Abstract       * const futurePtr,
                               TNode<task::Abstract*> * const taskNodePtr) :
    _futurePtr   { futurePtr   },
    _taskNodePtr { taskNodePtr }
{}

} // namespace schoco
