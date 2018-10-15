#pragma once

#if defined __GNUC__ || \
    defined __llvm__
    #define SCHOCO_LIKELY(x)   __builtin_expect ((x), 1)
    #define SCHOCO_UNLIKELY(x) __builtin_expect ((x), 0)
#else
    #define SCHOCO_LIKELY(x)   (x)
    #define SCHOCO_UNLIKELY(x) (x)
#endif
