#pragma once

#include "schoco/coroutine.hpp"
#include "schoco/register.hpp"

extern "C" void* schocoContextSwitch(schoco::Coroutine* srce,
                                     schoco::Coroutine* dest);

extern "C" void schocoMmxFpuSave(schoco::Register* mmxFpuState);

namespace schoco
{

void* contextSwitch(schoco::Coroutine* srce,
                    schoco::Coroutine* dest);

void mmxFpuSave(schoco::Register* mmxFpuState);

} // namespace schoco
