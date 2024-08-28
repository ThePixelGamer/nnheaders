#pragma once

#include <nn/gfx/detail/gfx_Misc.h>
#include <nn/gfx/gfx_Common.h>
#include <nn/nn_BitTypes.h>
#include <nn/util/util_BitPack.h>

namespace nn::gfx {

template <>
struct MemoryPoolImplData<ApiVariationNvn8> {
    enum State { State_NotInitialized, State_Initialized };
    enum Flag { Flag_Shared };

    detail::Ptr<void> pNvnMemoryPool;
    detail::Ptr<void> pMemory;
    char nvnMemoryPool[256];
    Bit8 state;
    nn::util::BitPack8 flags;
    char reserved[6];
    detail::Ptr<void> userPtr;
};

}  // namespace nn::gfx
