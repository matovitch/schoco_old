#pragma once

#include "schoco/future.hpp"
#include "schoco/task.hpp"
#include "schoco/node.hpp"

namespace schoco
{

struct FutureTaskPair
{
    FutureTaskPair(future::Abstract       * const futurePtr,
                   TNode<task::Abstract*> * const taskNodePtr);

    future::Abstract       * _futurePtr;
    TNode<task::Abstract*> * _taskNodePtr;
};

} // namespace schoco
