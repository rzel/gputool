/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "oss_2_0.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "oss_oss_2_0",
    .regs = oss_oss_2_0_regs,
    .size = ARRAY_SIZE(oss_oss_2_0_regs)
};

void load_oss_oss_2_0() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb
