#pragma once

#include "schoco/node.hpp"
#include "schoco/task.hpp"

#include <functional>

namespace schoco
{

template <class RETURN_TYPE>
void assignWork(TNode<task::Abstract*>& task,
                std::function<RETURN_TYPE()>&& work)
{
    reinterpret_cast<TTask<RETURN_TYPE>*>(task.value)->assign(std::move(work));
}

void cleanUp();

} // namespace schoco
