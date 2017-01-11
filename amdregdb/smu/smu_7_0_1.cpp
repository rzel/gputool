/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "smu_7_0_1.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "smu_smu_7_0_1",
    .regs = smu_smu_7_0_1_regs,
    .size = ARRAY_SIZE(smu_smu_7_0_1_regs)
};

void load_smu_smu_7_0_1() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb
