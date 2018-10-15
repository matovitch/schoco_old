#include "schoco/context_switch.hpp"

namespace schoco
{

void* contextSwitch(schoco::Coroutine* srce,
                    schoco::Coroutine* dest)
{
    return schocoContextSwitch(srce, dest);
}

void mmxFpuSave(schoco::Register* mmxFpuState)
{
    schocoMmxFpuSave(mmxFpuState);
}

} // namespace schoco
