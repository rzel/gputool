/*
 * Copyright (C) 2017  Andres Rodriguez
 *                     Valve Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
 * IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <gputool/config.h>
#include <stdio.h>
#include <map>
#include <vector>
#include "AmdGpuDevice.h"
#include "util.h"
#include "AmdRegDb.h"

namespace gputool
{

std::map<std::string, RegId> searchDb;

int doStuff()
{
    std::unique_ptr<AmdGpuDevice> GpuDevice = util::make_unique<AmdGpuDevice>();

    for (uint32_t i = 0; i < ARRAY_SIZE(gfx_v8_regs); ++i) {
        uint32_t val = GpuDevice->read(gfx_v8_regs[i]);
        printf("%s: 0x%x\n", gfx_v8_regs[i].name, val);
    }

    return 0;
}

}  // namespace gputool

int main()
{
    try {
        gputool::doStuff();
    } catch (...) {
        std::terminate();
    }
    return 0;
}
