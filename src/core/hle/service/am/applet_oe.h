// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include "core/hle/kernel/hle_ipc.h"
#include "core/hle/service/service.h"

namespace Service {
namespace NVFlinger {
class NVFlinger;
}

namespace AM {

// TODO: Add more languages
enum SystemLanguage {
    Japanese = 0,
    English = 1,
};

class AppletOE final : public ServiceFramework<AppletOE> {
public:
    AppletOE(std::shared_ptr<NVFlinger::NVFlinger> nvflinger);
    ~AppletOE() = default;

private:
    void OpenApplicationProxy(Kernel::HLERequestContext& ctx);

    std::shared_ptr<NVFlinger::NVFlinger> nvflinger;
};

} // namespace AM
} // namespace Service
