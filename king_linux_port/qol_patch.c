/*
 * Hard Truck 2: King of the Road - Modern Resolution & Widescreen QoL Patch Module
 * Compiled from the decompiled king_build/ functions into a 32-bit x86 code section (.qol at VA 0x007bc000)
 *
 * Refactored from:
 *   - king_build/FUN_005126d0.c (3D gameplay display mode setup & VRAM checks)
 *   - king_build/FUN_00510750.c (2D HUD / pause / pager / competition panel positioning)
 *   - king_build/FUN_005969c0.c (3D world & cabin camera frustum / Hor+ widescreen FOV)
 *   - king_build/FUN_00596cd0.c (Top-right rearview mirror screen positioning)
 *   - king_build/FUN_00594990.c (3D cabin side-mirror reflection 2D projection scaling)
 *   - king_build/FUN_00535a90.c (3rd-person external 3D speedometer/tachometer PanelSpace positioning)
 */

#include <stdint.h>

/* Engine functions in king.exe */
extern uint32_t __attribute__((cdecl)) FUN_0050b5f0(void);
extern int __attribute__((thiscall)) FUN_005dcf80(void *this_ptr, int width, int height, int bpp, uint32_t flags);
extern void * __attribute__((cdecl)) FUN_005ab580(void *out_mat, float s_y, float s_x, float s_z);
extern void * __attribute__((cdecl)) FUN_005ab330(void *out_mat, float x, float y, float z);
extern int __attribute__((cdecl)) FUN_00603230(const char *section, const char *key, int default_val, int *out_val, const char *ini_path);
extern int __attribute__((cdecl)) FUN_00603370(const char *section, const char *key, uint32_t def_lo, uint32_t def_hi, double *out_val, const char *ini_path);

/* Engine globals in king.exe */
extern const char DAT_00671998[]; /* "EFFECTS" */
extern const char DAT_0067d0ec[]; /* "xpyramid" */
extern double DAT_0067d0c0;       /* First-person base xpyramid (default 1.6) */
extern double DAT_0064a668;       /* 0.0 */
extern uint8_t DAT_006956b0;      /* Display/Window manager object */
extern int DAT_006957b0;          /* Current window width */
extern int DAT_006957b4;          /* Current window height */
extern uint32_t DAT_006957bc;     /* Extra video flags */
extern const char *DAT_006957c8;  /* TRUCK.INI file path */
extern int DAT_00695c00;          /* Viewer object pointer */
extern int DAT_00695c0c;          /* 3D Cabin Camera object pointer */
extern int DAT_006cdbd0;          /* Game options struct pointer */
extern int DAT_006cdc6c;          /* Left HUD X */
extern int DAT_006cdc70;          /* Left HUD Y */
extern int DAT_006cdc74;          /* Right HUD X */
extern int DAT_006cdc78;          /* Right HUD Y */
extern int DAT_006cdc7c;          /* Competition HUD X */
extern int DAT_006cdc80;          /* Competition HUD Y */
extern int DAT_006d0fd8;          /* Camera state pointer */
extern int DAT_006f58ac;          /* Rearview mirror width */
extern int DAT_006f599c;          /* Rearview mirror X */
extern int DAT_0071f7fc;          /* Active D3D width */
extern int DAT_0071f800;          /* Active D3D height */
extern uint32_t DAT_0071f840;     /* Available VRAM */

/* Jump table at the start of .qol (VA 0x007bc000) for deterministic hook addresses */
__attribute__((section(".text.entry"), naked))
void qol_entry(void) {
    __asm__ volatile (
        "jmp qol_hook_5127a7\n\t"         /* 0x007bc000: Hook 1 - 3D gameplay resolution setup */
        "jmp qol_hook_5107ba\n\t"         /* 0x007bc005: Hook 2 - 2D HUD & competition panel offsets */
        "jmp qol_hook_5970ef\n\t"         /* 0x007bc00a: Hook 3 - Top-right rearview mirror X offset */
        "jmp qol_FUN_005969c0\n\t"        /* 0x007bc00f: Hook 4 - Hor+ widescreen world & cabin camera */
        "jmp qol_mirror_scale_hook\n\t"   /* 0x007bc014: Hook 5 - 3D cabin side-mirror 2D projection */
        "jmp qol_panelspace_pos_hook\n\t" /* 0x007bc019: Hook 6 - 3rd-person 3D gauges bottom-left anchor */
        "jmp qol_null_check_5d6e00\n\t"   /* 0x007bc01e: Hook 7 - Prevent NULL texture segfault at 0x005D6F45 */
    );
}

/*
 * Recompiled & enhanced from king_build/FUN_005126d0.c:
 * Reads custom resolution from TRUCK.INI ([QOL] width/height or [ DISPLAY ] xres/yres)
 * or uses modern 16:9 presets for the 4 in-game video menu tiers, selects the optimal
 * HUD/mirror asset tier for the vertical resolution, and switches to the 3D display mode.
 */
void __attribute__((cdecl, used)) qol_setup_gameplay_display(uint32_t video_val, int bpp) {
    int custom_w = 0;
    int custom_h = 0;
    int lock_res = 1;
    const char *ini_path = DAT_006957c8;

    if (ini_path) {
        FUN_00603230("QOL", "width", 0, &custom_w, ini_path);
        FUN_00603230("QOL", "height", 0, &custom_h, ini_path);
        FUN_00603230("QOL", "lock_res", 1, &lock_res, ini_path);

        if (custom_w <= 0 || custom_h <= 0) {
            FUN_00603230("ENV", "xres", 0, &custom_w, ini_path);
            FUN_00603230("ENV", "yres", 0, &custom_h, ini_path);
            if (custom_w == 800 && custom_h == 600) {
                /* Default fallback if [QOL] wasn't populated yet */
                custom_w = 1920;
                custom_h = 1080;
            }
        }
    }

    uint32_t tier = video_val & 0x1f0;
    int target_w = 1920;
    int target_h = 1080;

    if (lock_res && custom_w >= 320 && custom_h >= 200) {
        target_w = custom_w;
        target_h = custom_h;
    } else {
        /* Map the 4 in-game Options -> Video radio buttons to modern 16:9 resolutions */
        if (tier == 0x140) {
            target_w = (custom_w >= 320) ? custom_w : 1920;
            target_h = (custom_h >= 200) ? custom_h : 1080;
        } else if (tier == 0x130) {
            target_w = 1920;
            target_h = 1080;
        } else if (tier == 0x120) {
            target_w = 1600;
            target_h = 900;
        } else {
            target_w = 1280;
            target_h = 720;
        }
    }

    /* Update the HUD/mirror bitmap asset tier (0x10..0x40) to match vertical resolution */
    if (DAT_006cdbd0 != 0) {
        uint32_t cur_vid = *(uint32_t *)(DAT_006cdbd0 + 0x198);
        uint32_t asset_tier = 0x40;
        if (target_h < 600) {
            asset_tier = 0x10;
        } else if (target_h < 720) {
            asset_tier = 0x20;
        } else if (target_h < 1000) {
            asset_tier = 0x30;
        } else {
            asset_tier = 0x40;
        }
        *(uint32_t *)(DAT_006cdbd0 + 0x198) = (cur_vid & ~0xf0u) | asset_tier;
    }

    uint32_t flags = FUN_0050b5f0() | DAT_006957bc | 0x4000u;
    FUN_005dcf80((void *)&DAT_006956b0, target_w, target_h, bpp, flags);
}

/* Assembly bridge for Hook 1 at 0x005127a7 */
__attribute__((naked, used))
void qol_hook_5127a7(void) {
    __asm__ volatile (
        "push edi\n\t"
        "push eax\n\t"
        "call qol_setup_gameplay_display\n\t"
        "add esp, 8\n\t"
        "mov eax, ds:0x0071f840\n\t"
        "mov ecx, 0x0051284f\n\t"
        "jmp ecx\n\t"
    );
}

/*
 * Recompiled & enhanced from king_build/FUN_00510750.c:
 * Dynamically computes 2D HUD, pause, F5/pager, and competition panel coordinates
 * for any arbitrary resolution width x height.
 */
void __attribute__((cdecl, used)) qol_setup_hud_offsets(void) {
    int w = DAT_0071f7fc;
    int h = DAT_0071f800;
    if (w <= 0) w = DAT_006957b0;
    if (h <= 0) h = DAT_006957b4;
    if (w <= 0) w = 800;
    if (h <= 0) h = 600;

    int y_off = (h - 1200) / 2 - 50;
    DAT_006cdc6c = 0;         /* Left panel X (anchored to left edge) */
    DAT_006cdc70 = y_off;     /* Left panel Y (vertically centered) */
    DAT_006cdc74 = w - 224;   /* Right F5/pager panel X (anchored to right edge) */
    DAT_006cdc78 = y_off;     /* Right F5/pager panel Y (vertically centered) */
    DAT_006cdc7c = w - 385;   /* Right competition table X (anchored to right edge) */
    DAT_006cdc80 = y_off;     /* Right competition table Y (vertically centered) */
}

/* Assembly bridge for Hook 2 at 0x005107ba */
__attribute__((naked, used))
void qol_hook_5107ba(void) {
    __asm__ volatile (
        "call qol_setup_hud_offsets\n\t"
        "mov ecx, ds:0x00695c00\n\t"
        "mov eax, 0x0051089e\n\t"
        "jmp eax\n\t"
    );
}

/*
 * Assembly bridge for Hook 3 at 0x005970ef (in FUN_00596cd0):
 * Dynamically anchors the top-right rearview mirror 24px from the right screen edge.
 */
__attribute__((naked, used))
void qol_hook_5970ef(void) {
    __asm__ volatile (
        "mov eax, ds:0x0071f7fc\n\t"
        "test eax, eax\n\t"
        "jle 1f\n\t"
        "sub eax, ds:0x006f58ac\n\t"
        "sub eax, 24\n\t"
        "mov ds:0x006f599c, eax\n\t"
        "1:\n\t"
        "push 0x0067d0f8\n\t"
        "mov eax, 0x005970f4\n\t"
        "jmp eax\n\t"
    );
}

/*
 * Recompiled & enhanced from king_build/FUN_005969c0.c:
 * Implements true Hor+ widescreen FOV scaling for both 1st-person and 3rd-person world cameras
 * AND updates the 3D cabin camera (DAT_00695c0c) frustum so the 3D dashboard and steering wheel
 * are never horizontally stretched on 16:9, 16:10, or 21:9 displays.
 */
void __attribute__((cdecl, used)) qol_FUN_005969c0(int param_1) {
    if (DAT_0067d0c0 < DAT_0064a668) {
        FUN_00603370(DAT_00671998, DAT_0067d0ec, 0x9999999au, 0x3ff99999u, &DAT_0067d0c0, DAT_006957c8);
    }

    uint16_t *dims = *(uint16_t **)(param_1 + 0xc);
    float w = (float)dims[0];
    float h = (float)dims[1];
    if (w <= 0.0f) w = 800.0f;
    if (h <= 0.0f) h = 600.0f;
    float aspect = w / h;

    int cam_state = DAT_006d0fd8;
    int is_external = (cam_state != 0 && *(int *)(cam_state + 0x578) != 0);

    float fov_1p = (float)DAT_0067d0c0;
    if (fov_1p < 0.5f || fov_1p > 3.5f) {
        fov_1p = 1.6f;
    }
    /* Scale 3rd-person FOV proportionally if the user customized xpyramid in TRUCK.INI */
    float fov_scale = fov_1p / 1.6f;
    float base_x = is_external ? (2.0f * fov_scale) : fov_1p;
    float base_y = base_x * 0.75f; /* 4:3 vertical frustum reference */

    float x_pyr, y_pyr;
    if (aspect > 1.3333334f) {
        /* Hor+ Widescreen: keep 4:3 vertical FOV intact and expand horizontal FOV */
        y_pyr = base_y;
        x_pyr = base_y * aspect;
    } else {
        x_pyr = base_x;
        y_pyr = (h * base_x) / w;
    }

    int world_cam = *(int *)(param_1 + 0x1e8);
    if (world_cam != 0) {
        *(float *)(world_cam + 0x54) = y_pyr;
        *(float *)(world_cam + 0x58) = x_pyr;
    }

    /* Update 3D Cabin Camera (DAT_00695c0c) to match screen aspect ratio (un-stretched Hor+ interior) */
    int cab_cam = DAT_00695c0c;
    if (cab_cam != 0) {
        float cab_y = 1.2f * fov_scale;
        float cab_x = (aspect > 1.3333334f) ? (cab_y * aspect) : (1.6f * fov_scale);
        *(float *)(cab_cam + 0x54) = cab_y;
        *(float *)(cab_cam + 0x58) = cab_x;
    }
}

/*
 * Hook 5 (at 0x00594fb8 in FUN_00594990):
 * Adjusts the 2D screen projection scale of the 3D cabin side-mirror reflection
 * to match the Hor+ 3D cabin camera frustum.
 */
void * __attribute__((cdecl, used)) qol_mirror_scale_hook(void *out_mat, float s_y, float s_x, float s_z) {
    int cab_cam = DAT_00695c0c;
    if (cab_cam != 0) {
        float y_pyr = *(float *)(cab_cam + 0x54);
        float x_pyr = *(float *)(cab_cam + 0x58);
        if (x_pyr > 0.1f && y_pyr > 0.1f) {
            s_x = 1.6f / x_pyr;
            s_z = 1.6f / y_pyr;
        }
    }
    return FUN_005ab580(out_mat, s_y, s_x, s_z);
}

/*
 * Hook 6 (at 0x0053615a in FUN_00535a90):
 * Anchors the 3rd-person external 3D speedometer/tachometer cluster (PanelSpace)
 * to the bottom-left corner of the Hor+ widescreen frustum without distortion.
 */
void * __attribute__((cdecl, used)) qol_panelspace_pos_hook(void *out_mat, float x, float y, float z) {
    int viewer = DAT_00695c00;
    if (viewer != 0) {
        int world_cam = *(int *)(viewer + 0x1e8);
        if (world_cam != 0) {
            float y_pyr = *(float *)(world_cam + 0x54);
            float x_pyr = *(float *)(world_cam + 0x58);
            if (x_pyr > 0.1f && y_pyr > 0.1f) {
                x = -1.1f * (x_pyr * 0.5f);
                z = -1.21f * (y_pyr * 0.5f);
            }
        }
    }
    return FUN_005ab330(out_mat, x, y, z);
}

/*
 * Hook 7 (at 0x005d6e00 in FUN_005d6e00):
 * Prevents crash at 0x005d6f45 (rep movsl from NULL) by checking if the source
 * pixel buffer pointer (3rd parameter, [esp+12]) is NULL. If NULL, safely returns 0.
 */
__attribute__((naked, used))
void qol_null_check_5d6e00(void) {
    __asm__ volatile (
        "cmp dword ptr [esp+12], 0\n\t"
        "jne 1f\n\t"
        "xor eax, eax\n\t"
        "ret\n\t"
        "1:\n\t"
        "sub esp, 0x114\n\t"
        "push ebx\n\t"
        "push ebp\n\t"
        "push esi\n\t"
        "push edi\n\t"
        "mov eax, 0x005d6e0a\n\t"
        "jmp eax\n\t"
    );
}


