/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "gfx_6_0.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "gca_gfx_6_0",
    .regs = gca_gfx_6_0_regs,
    .size = ARRAY_SIZE(gca_gfx_6_0_regs)
};

void load_gca_gfx_6_0() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb
