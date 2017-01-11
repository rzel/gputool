/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "bif_5_0.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "bif_bif_5_0",
    .regs = bif_bif_5_0_regs,
    .size = ARRAY_SIZE(bif_bif_5_0_regs)
};

void load_bif_bif_5_0() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb
