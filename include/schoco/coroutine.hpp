#pragma once

#include "schoco/register.hpp"
#include "schoco/stack.hpp"

namespace schoco
{

struct Coroutine
{
    static constexpr std::size_t STACK_SIZE = 8 * 1024;

    Coroutine();

    Register registers[RegisterMap::SIZE];

    TStack<STACK_SIZE> stack;
};

} // namespace schoco
