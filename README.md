gputool
=======

This is a tool for inspection of GPU HW, mainly intended for driver developers.

Supported Hardware
------------------

The underlying amdregdb contains the register spec format for all HW that amdgpu supports.

gputool currently supports:
	* POLARIS 10 (simple device id detection required for other hardware)

Supported Operations
--------------------

gputool currently supports:
	* Reading and decoding registers

Build
-----

```
mkdir build/
cd build/
cmake ..
make -j$(nproc)
```

Install
-------

Installing is optional, you can run gputool from the build folder.

```
cd build/
make install
```

Usage
-----

NOTE: gputool requires root privileges

```
sudo build/src/gputool
OR
sudo gputool (only if installed)
```

Commands
--------

Currently the only supported command is 'read $regname'

```
gputool> read PA_SC_RASTER_CONFIG
PA_SC_RASTER_CONFIG: 0x16000012
    RB_XSEL: 0x0
    SC_YSEL: 0x0
    SC_MAP: 0x0
    SC_XSEL: 0x0
    SE_YSEL: 0x1
    SE_XSEL: 0x1
    PKR_YSEL: 0x0
    RB_YSEL: 0x0
    PKR_XSEL: 0x0
    RB_XSEL2: 0x1
    PKR_XSEL2: 0x0
    SE_MAP: 0x2
    RB_MAP_PKR0: 0x2
    RB_MAP_PKR1: 0x0
    PKR_MAP: 0x0
```

```
gputool> read CB_HW_CONTROL
CB_HW_CONTROL: 0x7208
    FORCE_NEEDS_DST: 0x0
    DISABLE_BLEND_OPT_WHEN_DISABLED_SRCALPHA_IS_USED: 0x0
    DISABLE_BLEND_OPT_DISCARD_PIXEL: 0x0
    DISABLE_BLEND_OPT_DONT_RD_DST: 0x0
    PRIORITIZE_FC_EVICT_OVER_FOP_RD_ON_BANK_CONFLICT: 0x0
    DISABLE_FULL_WRITE_MASK: 0x0
    DISABLE_BLEND_OPT_RESULT_EQ_DEST: 0x0
    DISABLE_INTNORM_LE11BPC_CLAMPING: 0x0
    DISABLE_PIXEL_IN_QUAD_FIX_FOR_LINEAR_SURFACE: 0x0
    ALLOW_MRT_WITH_DUAL_SOURCE: 0x0
    DISABLE_CC_IB_SERIALIZER_STATE_OPT: 0x0
    PRIORITIZE_FC_WR_OVER_FC_RD_ON_CMASK_CONFLICT: 0x0
    FORCE_ALWAYS_TOGGLE: 0x0
    FC_CACHE_EVICT_POINT: 0x8
    CC_CACHE_EVICT_POINT: 0x7
    DISABLE_RESOLVE_OPT_FOR_SINGLE_FRAG: 0x0
    DISABLE_BLEND_OPT_BYPASS: 0x0
    CM_CACHE_EVICT_POINT: 0x8
```
