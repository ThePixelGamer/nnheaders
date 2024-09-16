#pragma once

#include <nn/gfx/detail/gfx_DataContainer.h>
#include <nn/gfx/gfx_Common.h>

namespace nn::gfx {

struct DescriptorSlotData {
    uint64_t value;
};

class DescriptorSlot : public detail::DataContainer<DescriptorSlotData> {
    static const uint64_t InvalidValue = 0xFFFFFFFFFFFFFFFF;

public:
    DescriptorSlot() { Invalidate(); }

    void Offset(ptrdiff_t offset) { value += offset; }
    bool IsValid() const { return this->value == InvalidValue; }
    void Invalidate() { this->value = InvalidValue; }
};

}  // namespace nn::gfx
