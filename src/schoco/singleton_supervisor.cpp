#include "schoco/singleton_supervisor.hpp"
#include "schoco/singleton.hpp"

namespace schoco
{

namespace singleton
{

void Supervisor::clean()
{
    for (auto singleton : _singletons)
    {
        singleton->clean();
        delete singleton;
    }

    _singletons.clear();
}

std::vector<Abstract*> Supervisor::_singletons;

} // namespace singleton

} // namespace schoco
