#pragma once

#include "schoco/singleton.hpp"
#include "schoco/factory.hpp"

namespace schoco
{

template <class Type>
using TFactorySingleton = TSingleton<TFactory<Type>>;

} // namespace schoco
