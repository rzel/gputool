/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "gfx_8_1.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "gca_gfx_8_1",
    .regs = gca_gfx_8_1_regs,
    .size = ARRAY_SIZE(gca_gfx_8_1_regs)
};

void load_gca_gfx_8_1() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb
