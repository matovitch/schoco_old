#include "schoco/utils.hpp"

#include "schoco/singleton_supervisor.hpp"

namespace schoco
{

void cleanUp()
{
    singleton::Supervisor::clean();
}

} // namespace schoco
