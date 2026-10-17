/*
 * Hard Truck 2: King of the Road - Native Linux Executable & Widescreen/QoL Launcher
 * Built from the decompiled king_build/ architecture and paired with the .qol patched king.exe.
 *
 * Features:
 *   - Arbitrary resolution selection (16:9, 16:10, 21:9 ultrawide, 4:3, and custom WxH)
 *   - True Hor+ Widescreen 3D world & 3D cabin camera support (via .qol section at VA 0x007bb000)
 *   - Dynamic 2D HUD, F5/pager, competition table, and rearview mirror alignment
 *   - Modern GPU (>2GB VRAM) and >=4GB RAM signed overflow fixes
 *   - Configurable Field of View (FOV / xpyramid), VSync, MSAA (Off/2x/4x/8x), 16x AF, Skip Intro
 *   - Interactive SDL2 GUI configuration window + full CLI interface
 */

#define _GNU_SOURCE
#include <SDL2/SDL.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

typedef struct {
    int width;
    int height;
    const char *label;
} ResPreset;

static ResPreset g_presets[] = {
    {1280, 720,  "1280x720 (16:9 HD)"},
    {1366, 768,  "1366x768 (16:9 WXGA)"},
    {1600, 900,  "1600x900 (16:9 HD+)"},
    {1920, 1080, "1920x1080 (16:9 Full HD)"},
    {2560, 1440, "2560x1440 (16:9 QHD 2K)"},
    {3840, 2160, "3840x2160 (16:9 4K UHD)"},
    {2560, 1080, "2560x1080 (21:9 Ultrawide)"},
    {3440, 1440, "3440x1440 (21:9 Ultrawide QHD)"},
    {1280, 800,  "1280x800 (16:10 Steam Deck / WXGA)"},
    {1920, 1200, "1920x1200 (16:10 WUXGA)"},
    {1024, 768,  "1024x768 (4:3 Classic)"},
    {1600, 1200, "1600x1200 (4:3 Classic UXGA)"},
    {0,    0,    "Custom Resolution"}
};
#define NUM_PRESETS ((int)(sizeof(g_presets) / sizeof(g_presets[0])))

typedef struct {
    int width;
    int height;
    int preset_idx;
    bool fullscreen;
    double fov;          /* Base 4:3 xpyramid (default 1.60; Hor+ scales automatically for 16:9/21:9) */
    bool vsync;
    int msaa_idx;        /* 0=Off, 1=2x, 2=4x, 3=8x */
    bool anisotropic;
    bool skip_intro;
    bool lock_res;       /* Lock gameplay resolution to width x height regardless of in-game radio button */
} GameConfig;

static const char *g_msaa_labels[] = {"Off", "2x MSAA", "4x MSAA", "8x MSAA"};
static const char *g_msaa_dxcfg[]  = {"disabled", "msaa_2x", "msaa_4x", "msaa_8x"};

/* Minimal 5x7 ASCII bitmap font for SDL2 GUI (printable chars 32..126) */
static const uint8_t g_font5x7[95][5] = {
    {0x00,0x00,0x00,0x00,0x00}, /* ' ' */
    {0x00,0x00,0x5f,0x00,0x00}, /* '!' */
    {0x00,0x07,0x00,0x07,0x00}, /* '"' */
    {0x14,0x7f,0x14,0x7f,0x14}, /* '#' */
    {0x24,0x2a,0x7f,0x2a,0x12}, /* '$' */
    {0x23,0x13,0x08,0x64,0x62}, /* '%' */
    {0x36,0x49,0x55,0x22,0x50}, /* '&' */
    {0x00,0x05,0x03,0x00,0x00}, /* ''' */
    {0x00,0x1c,0x22,0x41,0x00}, /* '(' */
    {0x00,0x41,0x22,0x1c,0x00}, /* ')' */
    {0x14,0x08,0x3e,0x08,0x14}, /* '*' */
    {0x08,0x08,0x3e,0x08,0x08}, /* '+' */
    {0x00,0x50,0x30,0x00,0x00}, /* ',' */
    {0x08,0x08,0x08,0x08,0x08}, /* '-' */
    {0x00,0x60,0x60,0x00,0x00}, /* '.' */
    {0x20,0x10,0x08,0x04,0x02}, /* '/' */
    {0x3e,0x51,0x49,0x45,0x3e}, /* '0' */
    {0x00,0x42,0x7f,0x40,0x00}, /* '1' */
    {0x42,0x61,0x51,0x49,0x46}, /* '2' */
    {0x21,0x41,0x45,0x4b,0x31}, /* '3' */
    {0x18,0x14,0x12,0x7f,0x10}, /* '4' */
    {0x27,0x45,0x45,0x45,0x39}, /* '5' */
    {0x3c,0x4a,0x49,0x49,0x30}, /* '6' */
    {0x01,0x71,0x09,0x05,0x03}, /* '7' */
    {0x36,0x49,0x49,0x49,0x36}, /* '8' */
    {0x06,0x49,0x49,0x29,0x1e}, /* '9' */
    {0x00,0x36,0x36,0x00,0x00}, /* ':' */
    {0x00,0x56,0x36,0x00,0x00}, /* ';' */
    {0x08,0x14,0x22,0x41,0x00}, /* '<' */
    {0x14,0x14,0x14,0x14,0x14}, /* '=' */
    {0x00,0x41,0x22,0x14,0x08}, /* '>' */
    {0x02,0x01,0x51,0x09,0x06}, /* '?' */
    {0x32,0x49,0x79,0x41,0x3e}, /* '@' */
    {0x7e,0x11,0x11,0x11,0x7e}, /* 'A' */
    {0x7f,0x49,0x49,0x49,0x36}, /* 'B' */
    {0x3e,0x41,0x41,0x41,0x22}, /* 'C' */
    {0x7f,0x41,0x41,0x22,0x1c}, /* 'D' */
    {0x7f,0x49,0x49,0x49,0x41}, /* 'E' */
    {0x7f,0x09,0x09,0x09,0x01}, /* 'F' */
    {0x3e,0x41,0x49,0x49,0x7a}, /* 'G' */
    {0x7f,0x08,0x08,0x08,0x7f}, /* 'H' */
    {0x00,0x41,0x7f,0x41,0x00}, /* 'I' */
    {0x20,0x40,0x41,0x3f,0x01}, /* 'J' */
    {0x7f,0x08,0x14,0x22,0x41}, /* 'K' */
    {0x7f,0x40,0x40,0x40,0x40}, /* 'L' */
    {0x7f,0x02,0x0c,0x02,0x7f}, /* 'M' */
    {0x7f,0x04,0x08,0x10,0x7f}, /* 'N' */
    {0x3e,0x41,0x41,0x41,0x3e}, /* 'O' */
    {0x7f,0x09,0x09,0x09,0x06}, /* 'P' */
    {0x3e,0x41,0x51,0x21,0x5e}, /* 'Q' */
    {0x7f,0x09,0x19,0x29,0x46}, /* 'R' */
    {0x46,0x49,0x49,0x49,0x31}, /* 'S' */
    {0x01,0x01,0x7f,0x01,0x01}, /* 'T' */
    {0x3f,0x40,0x40,0x40,0x3f}, /* 'U' */
    {0x1f,0x20,0x40,0x20,0x1f}, /* 'V' */
    {0x3f,0x40,0x38,0x40,0x3f}, /* 'W' */
    {0x63,0x14,0x08,0x14,0x63}, /* 'X' */
    {0x07,0x08,0x70,0x08,0x07}, /* 'Y' */
    {0x61,0x51,0x49,0x45,0x43}, /* 'Z' */
    {0x00,0x7f,0x41,0x41,0x00}, /* '[' */
    {0x02,0x04,0x08,0x10,0x20}, /* '\' */
    {0x00,0x41,0x41,0x7f,0x00}, /* ']' */
    {0x04,0x02,0x01,0x02,0x04}, /* '^' */
    {0x40,0x40,0x40,0x40,0x40}, /* '_' */
    {0x00,0x01,0x02,0x04,0x00}, /* '`' */
    {0x20,0x54,0x54,0x54,0x78}, /* 'a' */
    {0x7f,0x48,0x44,0x44,0x38}, /* 'b' */
    {0x38,0x44,0x44,0x44,0x20}, /* 'c' */
    {0x38,0x44,0x44,0x48,0x7f}, /* 'd' */
    {0x38,0x54,0x54,0x54,0x18}, /* 'e' */
    {0x08,0x7e,0x09,0x01,0x02}, /* 'f' */
    {0x0c,0x52,0x52,0x52,0x3e}, /* 'g' */
    {0x7f,0x08,0x04,0x04,0x78}, /* 'h' */
    {0x00,0x44,0x7d,0x40,0x00}, /* 'i' */
    {0x20,0x40,0x44,0x3d,0x00}, /* 'j' */
    {0x7f,0x10,0x28,0x44,0x00}, /* 'k' */
    {0x00,0x41,0x7f,0x40,0x00}, /* 'l' */
    {0x7c,0x04,0x18,0x04,0x78}, /* 'm' */
    {0x7c,0x08,0x04,0x04,0x78}, /* 'n' */
    {0x38,0x44,0x44,0x44,0x38}, /* 'o' */
    {0x7c,0x14,0x14,0x14,0x08}, /* 'p' */
    {0x08,0x14,0x14,0x18,0x7c}, /* 'q' */
    {0x7c,0x08,0x04,0x04,0x08}, /* 'r' */
    {0x48,0x54,0x54,0x54,0x20}, /* 's' */
    {0x04,0x3f,0x44,0x40,0x20}, /* 't' */
    {0x3c,0x40,0x40,0x20,0x7c}, /* 'u' */
    {0x1c,0x20,0x40,0x20,0x1c}, /* 'v' */
    {0x3c,0x40,0x30,0x40,0x3c}, /* 'w' */
    {0x44,0x28,0x10,0x28,0x44}, /* 'x' */
    {0x0c,0x50,0x50,0x50,0x3c}, /* 'y' */
    {0x44,0x64,0x54,0x4c,0x44}, /* 'z' */
    {0x00,0x08,0x36,0x41,0x00}, /* '{' */
    {0x00,0x00,0x7f,0x00,0x00}, /* '|' */
    {0x00,0x41,0x36,0x08,0x00}, /* '}' */
    {0x10,0x08,0x08,0x10,0x08}  /* '~' */
};

static void draw_text(SDL_Renderer *ren, const char *text, int x, int y, int scale, SDL_Color col) {
    SDL_SetRenderDrawColor(ren, col.r, col.g, col.b, col.a);
    int cx = x;
    for (const char *p = text; *p; ++p) {
        unsigned char c = (unsigned char)*p;
        if (c < 32 || c > 126) c = '?';
        const uint8_t *glyph = g_font5x7[c - 32];
        for (int gx = 0; gx < 5; ++gx) {
            uint8_t col_bits = glyph[gx];
            for (int gy = 0; gy < 7; ++gy) {
                if (col_bits & (1 << gy)) {
                    SDL_Rect r = {cx + gx * scale, y + gy * scale, scale, scale};
                    SDL_RenderFillRect(ren, &r);
                }
            }
        }
        cx += 6 * scale;
    }
}

static int text_width(const char *text, int scale) {
    int len = (int)strlen(text);
    return len > 0 ? (len * 6 * scale - scale) : 0;
}

static void sync_preset_index(GameConfig *cfg) {
    for (int i = 0; i < NUM_PRESETS - 1; ++i) {
        if (g_presets[i].width == cfg->width && g_presets[i].height == cfg->height) {
            cfg->preset_idx = i;
            return;
        }
    }
    g_presets[NUM_PRESETS - 1].width = cfg->width;
    g_presets[NUM_PRESETS - 1].height = cfg->height;
    cfg->preset_idx = NUM_PRESETS - 1;
}

static void get_base_dir(char *out_dir, size_t size) {
    char exe_path[PATH_MAX];
    ssize_t len = readlink("/proc/self/exe", exe_path, sizeof(exe_path) - 1);
    if (len > 0) {
        exe_path[len] = '\0';
        char *slash = strrchr(exe_path, '/');
        if (slash) *slash = '\0';
        /* Check if "game files" is in exe_path or parent of exe_path */
        char test_path[PATH_MAX + 64];
        snprintf(test_path, sizeof(test_path), "%s/game files/king.exe", exe_path);
        if (access(test_path, F_OK) == 0) {
            snprintf(out_dir, size, "%s", exe_path);
            return;
        }
        char *parent_slash = strrchr(exe_path, '/');
        if (parent_slash) {
            *parent_slash = '\0';
            snprintf(test_path, sizeof(test_path), "%s/game files/king.exe", exe_path);
            if (access(test_path, F_OK) == 0) {
                snprintf(out_dir, size, "%s", exe_path);
                return;
            }
        }
    }
    if (getcwd(out_dir, size) == NULL) {
        snprintf(out_dir, size, ".");
    }
}

/* Case-insensitive INI key/section helpers */
static void trim_line(char *s) {
    size_t n = strlen(s);
    while (n > 0 && (s[n - 1] == '\r' || s[n - 1] == '\n' || s[n - 1] == ' ' || s[n - 1] == '\t')) {
        s[--n] = '\0';
    }
}

static bool ini_get_string(const char *path, const char *section, const char *key, char *out, size_t out_sz) {
    FILE *f = fopen(path, "r");
    if (!f) return false;
    char line[512];
    bool in_sec = (section == NULL || section[0] == '\0');
    size_t key_len = strlen(key);

    while (fgets(line, sizeof(line), f)) {
        trim_line(line);
        char *p = line;
        while (*p == ' ' || *p == '\t') ++p;
        if (*p == ';' || *p == '#' || *p == '\0') continue;
        if (*p == '[') {
            char *end = strchr(p + 1, ']');
            if (end) {
                *end = '\0';
                in_sec = (strcasecmp(p + 1, section) == 0);
            }
            continue;
        }
        if (in_sec) {
            char *eq = strchr(p, '=');
            if (eq) {
                size_t klen = (size_t)(eq - p);
                while (klen > 0 && (p[klen - 1] == ' ' || p[klen - 1] == '\t')) --klen;
                if (klen == key_len && strncasecmp(p, key, key_len) == 0) {
                    char *val = eq + 1;
                    while (*val == ' ' || *val == '\t') ++val;
                    snprintf(out, out_sz, "%s", val);
                    fclose(f);
                    return true;
                }
            }
        }
    }
    fclose(f);
    return false;
}

static void load_config(const char *game_dir, GameConfig *cfg) {
    /* Defaults: 1920x1080 16:9 Hor+, Fullscreen (desktop borderless via ddraw), FOV 1.60, VSync Off (for high FPS & no lag), MSAA Off, 16x AF */
    cfg->width = 1920;
    cfg->height = 1080;
    cfg->fullscreen = true;
    cfg->fov = 1.60;
    cfg->vsync = false; /* Disabled by default for maximum framerate and no vblank stutter */
    cfg->msaa_idx = 0; /* Off (disabled) by default for smooth high FPS */
    cfg->anisotropic = true;
    cfg->skip_intro = true;
    cfg->lock_res = true;

    char truck_ini[PATH_MAX + 128], dxcfg_ini[PATH_MAX + 128], buf[128];
    snprintf(truck_ini, sizeof(truck_ini), "%s/TRUCK.INI", game_dir);
    snprintf(dxcfg_ini, sizeof(dxcfg_ini), "%s/dxcfg.ini", game_dir);

    if (ini_get_string(truck_ini, "QOL", "width", buf, sizeof(buf))) {
        int w = atoi(buf);
        if (w >= 320) cfg->width = w;
    }

    if (ini_get_string(truck_ini, "QOL", "height", buf, sizeof(buf))) {
        int h = atoi(buf);
        if (h >= 200) cfg->height = h;
    }

    if (ini_get_string(truck_ini, "QOL", "lock_res", buf, sizeof(buf))) {
        cfg->lock_res = (atoi(buf) != 0);
    }

    if (ini_get_string(truck_ini, "QOL", "skip_intro", buf, sizeof(buf))) {
        cfg->skip_intro = (atoi(buf) != 0);
    }

    if (ini_get_string(truck_ini, "EFFECTS", "xpyramid", buf, sizeof(buf))) {
        double v = atof(buf);
        if (v >= 0.8 && v <= 3.0) cfg->fov = v;
    }

    if (ini_get_string(dxcfg_ini, "dxcfg", "presentation", buf, sizeof(buf)) ||
        ini_get_string(dxcfg_ini, "", "presentation", buf, sizeof(buf))) {
        cfg->fullscreen = (strcasecmp(buf, "windowed") != 0 && strcasecmp(buf, "window") != 0);
    } else if (ini_get_string(dxcfg_ini, "dxcfg", "display", buf, sizeof(buf)) ||
               ini_get_string(dxcfg_ini, "", "display", buf, sizeof(buf))) {
        cfg->fullscreen = (strcasecmp(buf, "windowed") != 0 && strcasecmp(buf, "window") != 0);
    }
    if (ini_get_string(dxcfg_ini, "dxcfg", "vsync", buf, sizeof(buf)) ||
        ini_get_string(dxcfg_ini, "", "vsync", buf, sizeof(buf))) {
        cfg->vsync = (strcasecmp(buf, "disabled") != 0);
    }
    if (ini_get_string(dxcfg_ini, "dxcfg", "antialiasing", buf, sizeof(buf)) ||
        ini_get_string(dxcfg_ini, "", "antialiasing", buf, sizeof(buf))) {
        if (strcasecmp(buf, "disabled") == 0) cfg->msaa_idx = 0;
        else if (strcasecmp(buf, "msaa_2x") == 0 || strcasecmp(buf, "2x") == 0) cfg->msaa_idx = 1;
        else if (strcasecmp(buf, "msaa_4x") == 0 || strcasecmp(buf, "4x") == 0) cfg->msaa_idx = 2;
        else if (strcasecmp(buf, "msaa_8x") == 0 || strcasecmp(buf, "8x") == 0) cfg->msaa_idx = 3;
    }
    if (ini_get_string(dxcfg_ini, "dxcfg", "anisotropic", buf, sizeof(buf)) ||
        ini_get_string(dxcfg_ini, "", "anisotropic", buf, sizeof(buf))) {
        cfg->anisotropic = (strcasecmp(buf, "disabled") != 0);
    }

    sync_preset_index(cfg);
}

static bool save_config(const char *game_dir, const GameConfig *cfg) {
    char truck_ini[PATH_MAX + 128], truck_bak[PATH_MAX + 128];
    char dxcfg_ini[PATH_MAX + 128], dxcfg_bak[PATH_MAX + 128];
    snprintf(truck_ini, sizeof(truck_ini), "%s/TRUCK.INI", game_dir);
    snprintf(truck_bak, sizeof(truck_bak), "%s/TRUCK.INI.bak", game_dir);
    snprintf(dxcfg_ini, sizeof(dxcfg_ini), "%s/dxcfg.ini", game_dir);
    snprintf(dxcfg_bak, sizeof(dxcfg_bak), "%s/dxcfg.ini.bak", game_dir);

    /* Backup originals once */
    if (access(truck_bak, F_OK) != 0 && access(truck_ini, F_OK) == 0) {
        FILE *src = fopen(truck_ini, "rb");
        FILE *dst = fopen(truck_bak, "wb");
        if (src && dst) {
            char b[4096];
            size_t n;
            while ((n = fread(b, 1, sizeof(b), src)) > 0) fwrite(b, 1, n, dst);
        }
        if (src) fclose(src);
        if (dst) fclose(dst);
    }
    if (access(dxcfg_bak, F_OK) != 0 && access(dxcfg_ini, F_OK) == 0) {
        FILE *src = fopen(dxcfg_ini, "rb");
        FILE *dst = fopen(dxcfg_bak, "wb");
        if (src && dst) {
            char b[4096];
            size_t n;
            while ((n = fread(b, 1, sizeof(b), src)) > 0) fwrite(b, 1, n, dst);
        }
        if (src) fclose(src);
        if (dst) fclose(dst);
    }

    /* 1. Write dxcfg.ini with exact [dxcfg] section schema expected by GOG's ddraw.dll */
    FILE *df = fopen(dxcfg_ini, "w");
    if (!df) {
        perror("Failed to write dxcfg.ini");
        return false;
    }
    fprintf(df,
        "[dxcfg]\r\n"
        "display=desktop\r\n"
        "presentation=%s\r\n"
        "aspect=enabled\r\n"
        "scaling=fit\r\n"
        "vsync=%s\r\n"
        "gamma=1.0\r\n"
        "anisotropic=%s\r\n"
        "antialiasing=%s\r\n",
        cfg->fullscreen ? "fullscreen" : "windowed",
        cfg->vsync ? "enabled" : "disabled",
        cfg->anisotropic ? "enabled" : "disabled",
        g_msaa_dxcfg[cfg->msaa_idx & 3]
    );
    fclose(df);

    /* 2. Write TRUCK.INI with all required engine sections ([ENV], [RENDER], [CAR], [INSTALL], [JOYSTICK], [EFFECTS], [DRV1], [DRV2], [QOL]) */
    uint32_t asset_tier = (cfg->height >= 1000) ? 0x40 : ((cfg->height >= 720) ? 0x30 : ((cfg->height >= 600) ? 0x20 : 0x10));
    uint32_t video_val = 0x102 | asset_tier;

    FILE *tf = fopen(truck_ini, "w");
    if (!tf) {
        perror("Failed to write TRUCK.INI");
        return false;
    }
    fprintf(tf,
        "[ENV]\r\n"
        "xres=800\r\n"
        "yres=600\r\n"
        "fullscreen=%s\r\n"
        "cres=1\r\n"
        "d3d=on\r\n"
        "sound=on\r\n"
        "joystick=on\r\n"
        "bordin=on\r\n"
        "numdev=1\r\n"
        "langv=eng\r\n"
        "\r\n"
        "[QOL]\r\n"
        "width=%d\r\n"
        "height=%d\r\n"
        "lock_res=%d\r\n"
        "skip_intro=%d\r\n"
        "widescreen_hor_plus=1\r\n"
        "\r\n"
        "[RENDER]\r\n"
        "\r\n"
        "detail=90\r\n"
        "dcoeff=0.15\r\n"
        "fog=on 10000 20000\r\n"
        "zbuf=on\r\n"
        "xpyramid=1.2\r\n"
        "ypyramid=0.9\r\n"
        "ambient=0.9\r\n"
        "intensity=on\r\n"
        "alphamir=off\r\n"
        "skyzb=0\r\n"
        "skyfun=0.997\r\n"
        "newkeying=on\r\n"
        "\r\n"
        "[CAR]\r\n"
        "b3d_file=circuit.b3d\r\n"
        "tch_file=truck2.tch\r\n"
        "\r\n"
        "tech_number=2003\r\n"
        "friction_coeff=1.4\r\n"
        "steering_sence=0.5\r\n"
        "idle_steering=0.5;\r\n"
        "collision_coeff=0.05 ;\r\n"
        "\r\n"
        "road_wall_collision=on\r\n"
        "maskXview0=0 0 -30 0 0\r\n"
        "maskYview0=0 0 44 0 0\r\n"
        "maskYview1=350 400 250 400 370\r\n"
        "maskYtile=540 500 460 500 540\r\n"
        "RoadWidthReducement=1.5\r\n"
        "kmph=on\r\n"
        "\r\n"
        "[INSTALL]\r\n"
        "\r\n"
        "home=.\\\r\n"
        "base=.\\\r\n"
        "movie=.\\\r\n"
        "source=.\\\r\n"
        "mode=maximum\r\n"
        "MUSIC=.\\MUSIC\r\n"
        "setup=on\r\n"
        "\r\n"
        "[JOYSTICK]\r\n"
        "invert_xy=off\r\n"
        "invert_x=off\r\n"
        "invert_y=off\r\n"
        "\r\n"
        "[EFFECTS]\r\n"
        "aicar=1\r\n"
        "autgb=on\r\n"
        "sfxvol=54\r\n"
        "midivol=20\r\n"
        "engvol=90\r\n"
        "skivol=90\r\n"
        "power=50\r\n"
        "sens=50\r\n"
        "eff=1023\r\n"
        "vmode=on\r\n"
        "control=0\r\n"
        "timestart=10\r\n"
        "timetemp=0.2\r\n"
        "wstart=0.75\r\n"
        "wtemp=0.13\r\n"
        "\r\n"
        "reduced=on\r\n"
        "dtl=100\r\n"
        "grf=100\r\n"
        "trafs=100\r\n"
        "trafm=100\r\n"
        "video=%u\r\n"
        "lastp=DRIVER\r\n"
        "logo=5\r\n"
        "photo=0\r\n"
        "arcad=0\r\n"
        "cartruck=0\r\n"
        "days=50\r\n"
        "weats=60\r\n"
        "maxdrv=0\r\n"
        "slarge=0\r\n"
        "xpyramid=%.4f\r\n"
        "[DRV1]\r\n"
        "vpas=0\r\n"
        "vpam=0\r\n"
        "vpal=0\r\n"
        "vpasl=0\r\n"
        "name=Primary Display Driver\r\n"
        "tmem=536870912\r\n"
        "vmem=536870912\r\n"
        "[DRV2]\r\n"
        "vpas=1\r\n"
        "vpam=1\r\n"
        "vpal=1\r\n"
        "vpasl=1\r\n",
        cfg->fullscreen ? "on" : "off",
        cfg->width, cfg->height,
        cfg->lock_res ? 1 : 0,
        cfg->skip_intro ? 1 : 0,
        video_val,
        cfg->fov
    );
    fclose(tf);
    return true;
}

static bool verify_qol_patch(const char *game_dir) {
    char exe_path[PATH_MAX + 128];
    snprintf(exe_path, sizeof(exe_path), "%s/king.exe", game_dir);
    FILE *f = fopen(exe_path, "rb");
    if (!f) return false;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fclose(f);
    return (sz >= 0x002C7000);
}

static void print_status(const char *game_dir, const GameConfig *cfg) {
    double aspect = (double)cfg->width / (double)cfg->height;
    double eff_xpyr = (aspect > (4.0 / 3.0)) ? (cfg->fov * 0.75 * aspect) : cfg->fov;
    double hfov_deg = 2.0 * atan(eff_xpyr * 0.5) * (180.0 / M_PI);
    double vfov_deg = 2.0 * atan((cfg->fov * 0.75) * 0.5) * (180.0 / M_PI);

    printf("================================================================\n");
    printf("  Hard Truck 2: King of the Road - Linux QoL & Widescreen Port  \n");
    printf("================================================================\n");
    printf("  Game Directory     : %s\n", game_dir);
    printf("  Binary Patch (.qol): %s\n", verify_qol_patch(game_dir) ? "ACTIVE (VA 0x007bb000)" : "NOT APPLIED");
    printf("  Resolution         : %dx%d (Aspect %.2f:1)\n", cfg->width, cfg->height, aspect);
    printf("  Display Mode       : %s\n", cfg->fullscreen ? "Fullscreen (Borderless Desktop)" : "Windowed");
    printf("  Widescreen Mode    : Hor+ (3D World, 3D Cabin, 3D Gauges, 2D HUD & Mirrors)\n");
    printf("  Field of View (FOV): xpyramid=%.2f (Hor+ HFOV: %.1f deg, VFOV: %.1f deg)\n",
           cfg->fov, hfov_deg, vfov_deg);
    printf("  VSync              : %s\n", cfg->vsync ? "Enabled" : "Disabled");
    printf("  Anti-Aliasing      : %s\n", g_msaa_labels[cfg->msaa_idx & 3]);
    printf("  Anisotropic Filter : %s\n", cfg->anisotropic ? "16x Enabled" : "Disabled");
    printf("  Skip Intro Video   : %s\n", cfg->skip_intro ? "Enabled" : "Disabled");
    printf("================================================================\n");
}

static void print_help(const char *prog) {
    printf("Usage: %s [options]\n\n", prog);
    printf("Hard Truck 2: King of the Road - Linux Executable & Widescreen QoL Launcher\n\n");
    printf("Options:\n");
    printf("  -r, --res <WxH>          Set 3D gameplay resolution (e.g. 1920x1080, 2560x1440, 3440x1440)\n");
    printf("  -f, --fullscreen         Run in borderless fullscreen mode\n");
    printf("  -w, --windowed           Run in windowed mode\n");
    printf("      --fov <value>        Set base 4:3 horizontal frustum width (1.20..2.40, default 1.60)\n");
    printf("      --vsync <on|off>     Enable or disable vertical sync\n");
    printf("      --msaa <off|2x|4x|8x> Set anti-aliasing level\n");
    printf("      --af <on|off>        Enable or disable 16x anisotropic texture filtering\n");
    printf("      --skip-intro <on|off> Skip startup intro video\n");
    printf("      --unlock-presets     Let the 4 in-game video menu buttons switch 720p/900p/1080p/Custom\n");
    printf("      --gui                Open the interactive SDL2 configuration launcher\n");
    printf("      --play, --no-gui     Launch the game immediately without opening the SDL2 launcher\n");
    printf("      --apply-only         Save configuration to TRUCK.INI and dxcfg.ini and exit\n");
    printf("      --status             Print current resolution, FOV, and patch status\n");
    printf("  -h, --help               Show this help message\n");
}

/* Interactive SDL2 GUI Launcher Returns: 1 = Launch Game, 0 = Save & Exit, -1 = Cancel */
static int run_sdl2_launcher(GameConfig *cfg) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "[!] SDL_Init failed (%s), falling back to direct launch.\n", SDL_GetError());
        return 1;
    }

    /* Detect desktop resolution and offer it if not already in preset list */
    SDL_DisplayMode dm;
    if (SDL_GetDesktopDisplayMode(0, &dm) == 0 && dm.w >= 640 && dm.h >= 480) {
        bool found = false;
        for (int i = 0; i < NUM_PRESETS - 1; ++i) {
            if (g_presets[i].width == dm.w && g_presets[i].height == dm.h) {
                found = true;
                break;
            }
        }
        if (!found) {
            static char custom_lbl[64];
            snprintf(custom_lbl, sizeof(custom_lbl), "%dx%d (Native Desktop)", dm.w, dm.h);
            g_presets[NUM_PRESETS - 1].width = dm.w;
            g_presets[NUM_PRESETS - 1].height = dm.h;
            g_presets[NUM_PRESETS - 1].label = custom_lbl;
        }
    }

    const int win_w = 760;
    const int win_h = 540;
    SDL_Window *win = SDL_CreateWindow(
        "Hard Truck 2: King of the Road - Linux Widescreen & QoL Launcher",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        win_w, win_h, SDL_WINDOW_SHOWN
    );
    if (!win) {
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!ren) {
        ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);
    }

    int selected_row = 0;
    const int num_rows = 8;
    bool running = true;
    int result = -1;

    while (running) {
        SDL_Event ev;
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_QUIT) {
                running = false;
                result = -1;
            } else if (ev.type == SDL_KEYDOWN) {
                SDL_Keycode k = ev.key.keysym.sym;
                if (k == SDLK_ESCAPE) {
                    running = false;
                    result = -1;
                } else if (k == SDLK_UP) {
                    selected_row = (selected_row + num_rows - 1) % num_rows;
                } else if (k == SDLK_DOWN || k == SDLK_TAB) {
                    selected_row = (selected_row + 1) % num_rows;
                } else if (k == SDLK_LEFT || k == SDLK_RIGHT || k == SDLK_SPACE || k == SDLK_RETURN) {
                    int dir = (k == SDLK_LEFT) ? -1 : 1;
                    if (selected_row == 0) {
                        int max_p = (g_presets[NUM_PRESETS - 1].width > 0) ? NUM_PRESETS : (NUM_PRESETS - 1);
                        cfg->preset_idx = (cfg->preset_idx + max_p + dir) % max_p;
                        cfg->width = g_presets[cfg->preset_idx].width;
                        cfg->height = g_presets[cfg->preset_idx].height;
                    } else if (selected_row == 1) {
                        cfg->fullscreen = !cfg->fullscreen;
                    } else if (selected_row == 2) {
                        cfg->fov += dir * 0.05;
                        if (cfg->fov < 1.20) cfg->fov = 1.20;
                        if (cfg->fov > 2.40) cfg->fov = 2.40;
                    } else if (selected_row == 3) {
                        cfg->vsync = !cfg->vsync;
                    } else if (selected_row == 4) {
                        cfg->msaa_idx = (cfg->msaa_idx + 4 + dir) % 4;
                    } else if (selected_row == 5) {
                        cfg->anisotropic = !cfg->anisotropic;
                    } else if (selected_row == 6) {
                        cfg->skip_intro = !cfg->skip_intro;
                    } else if (selected_row == 7 && (k == SDLK_RETURN || k == SDLK_SPACE)) {
                        result = 1;
                        running = false;
                    }
                }
            } else if (ev.type == SDL_MOUSEBUTTONDOWN && ev.button.button == SDL_BUTTON_LEFT) {
                int mx = ev.button.x;
                int my = ev.button.y;
                for (int r = 0; r < 7; ++r) {
                    int ry = 105 + r * 46;
                    if (my >= ry && my <= ry + 36 && mx >= 40 && mx <= win_w - 40) {
                        selected_row = r;
                        int dir = (mx < win_w / 2 + 110) ? -1 : 1;
                        if (r == 0) {
                            int max_p = (g_presets[NUM_PRESETS - 1].width > 0) ? NUM_PRESETS : (NUM_PRESETS - 1);
                            cfg->preset_idx = (cfg->preset_idx + max_p + dir) % max_p;
                            cfg->width = g_presets[cfg->preset_idx].width;
                            cfg->height = g_presets[cfg->preset_idx].height;
                        } else if (r == 1) cfg->fullscreen = !cfg->fullscreen;
                        else if (r == 2) {
                            cfg->fov += dir * 0.05;
                            if (cfg->fov < 1.20) cfg->fov = 1.20;
                            if (cfg->fov > 2.40) cfg->fov = 2.40;
                        } else if (r == 3) cfg->vsync = !cfg->vsync;
                        else if (r == 4) cfg->msaa_idx = (cfg->msaa_idx + 4 + dir) % 4;
                        else if (r == 5) cfg->anisotropic = !cfg->anisotropic;
                        else if (r == 6) cfg->skip_intro = !cfg->skip_intro;
                    }
                }
                /* Bottom Buttons */
                if (my >= 455 && my <= 505) {
                    if (mx >= 60 && mx <= 420) {
                        result = 1; /* Save & Launch */
                        running = false;
                    } else if (mx >= 450 && mx <= 700) {
                        result = 0; /* Save Only */
                        running = false;
                    }
                }
            }
        }

        /* Render UI */
        SDL_SetRenderDrawColor(ren, 20, 24, 33, 255);
        SDL_RenderClear(ren);

        /* Header Banner */
        SDL_Rect hdr = {0, 0, win_w, 82};
        SDL_SetRenderDrawColor(ren, 32, 40, 56, 255);
        SDL_RenderFillRect(ren, &hdr);
        SDL_SetRenderDrawColor(ren, 230, 168, 45, 255);
        SDL_Rect accent = {0, 80, win_w, 3};
        SDL_RenderFillRect(ren, &accent);

        SDL_Color c_gold  = {245, 190, 65, 255};
        SDL_Color c_white = {235, 240, 248, 255};
        SDL_Color c_muted = {155, 168, 188, 255};
        SDL_Color c_green = {90, 220, 135, 255};

        const char *title = "HARD TRUCK 2: KING OF THE ROAD";
        draw_text(ren, title, (win_w - text_width(title, 3)) / 2, 18, 3, c_gold);
        const char *sub = "LINUX WIDESCREEN (HOR+) & QUALITY OF LIFE CONFIGURATION";
        draw_text(ren, sub, (win_w - text_width(sub, 2)) / 2, 52, 2, c_white);

        const char *labels[7] = {
            "3D Resolution",
            "Display Mode",
            "Field of View (Hor+)",
            "Vertical Sync (VSync)",
            "Anti-Aliasing (MSAA)",
            "Anisotropic Filtering",
            "Skip Startup Intro"
        };

        char val_buf[7][96];
        snprintf(val_buf[0], sizeof(val_buf[0]), "< %s >", g_presets[cfg->preset_idx].label);
        snprintf(val_buf[1], sizeof(val_buf[1]), "< %s >", cfg->fullscreen ? "Fullscreen (Desktop)" : "Windowed");
        double aspect = (double)cfg->width / (double)cfg->height;
        double eff_x = (aspect > 1.3334) ? (cfg->fov * 0.75 * aspect) : cfg->fov;
        double hfov = 2.0 * atan(eff_x * 0.5) * (180.0 / M_PI);
        snprintf(val_buf[2], sizeof(val_buf[2]), "< %.2f (%.0f deg HFOV) >", cfg->fov, hfov);
        snprintf(val_buf[3], sizeof(val_buf[3]), "< %s >", cfg->vsync ? "ON" : "OFF");
        snprintf(val_buf[4], sizeof(val_buf[4]), "< %s >", g_msaa_labels[cfg->msaa_idx & 3]);
        snprintf(val_buf[5], sizeof(val_buf[5]), "< %s >", cfg->anisotropic ? "16x ON" : "OFF");
        snprintf(val_buf[6], sizeof(val_buf[6]), "< %s >", cfg->skip_intro ? "ON" : "OFF");

        for (int r = 0; r < 7; ++r) {
            int ry = 105 + r * 46;
            SDL_Rect row_rect = {40, ry, win_w - 80, 38};
            if (selected_row == r) {
                SDL_SetRenderDrawColor(ren, 46, 58, 82, 255);
            } else {
                SDL_SetRenderDrawColor(ren, 28, 34, 48, 255);
            }
            SDL_RenderFillRect(ren, &row_rect);
            if (selected_row == r) {
                SDL_SetRenderDrawColor(ren, 245, 190, 65, 255);
                SDL_RenderDrawRect(ren, &row_rect);
            }

            draw_text(ren, labels[r], 58, ry + 12, 2, selected_row == r ? c_gold : c_white);
            int vw = text_width(val_buf[r], 2);
            draw_text(ren, val_buf[r], win_w - 58 - vw, ry + 12, 2, c_green);
        }

        /* Launch & Save Buttons */
        SDL_Rect btn_launch = {60, 455, 360, 48};
        SDL_SetRenderDrawColor(ren, selected_row == 7 ? 235 : 195, selected_row == 7 ? 165 : 130, 35, 255);
        SDL_RenderFillRect(ren, &btn_launch);
        const char *l_txt = "SAVE & LAUNCH GAME (ENTER)";
        draw_text(ren, l_txt, btn_launch.x + (btn_launch.w - text_width(l_txt, 2)) / 2, btn_launch.y + 17, 2, (SDL_Color){15, 20, 28, 255});

        SDL_Rect btn_save = {450, 455, 250, 48};
        SDL_SetRenderDrawColor(ren, 52, 66, 92, 255);
        SDL_RenderFillRect(ren, &btn_save);
        const char *s_txt = "SAVE SETTINGS ONLY";
        draw_text(ren, s_txt, btn_save.x + (btn_save.w - text_width(s_txt, 2)) / 2, btn_save.y + 17, 2, c_white);

        const char *footer = "Use Arrow Keys / Mouse to customize | True 16:9 & 21:9 Hor+ Widescreen Patch Active";
        draw_text(ren, footer, (win_w - text_width(footer, 1)) / 2, 518, 1, c_muted);

        SDL_RenderPresent(ren);
        SDL_Delay(16);
    }

    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return result;
}

int main(int argc, char **argv) {
    char base_dir[PATH_MAX];
    char game_dir[PATH_MAX + 64];
    get_base_dir(base_dir, sizeof(base_dir));
    snprintf(game_dir, sizeof(game_dir), "%s/game files", base_dir);

    GameConfig cfg;
    load_config(game_dir, &cfg);

    bool force_gui = false;
    bool no_gui = false;
    bool apply_only = false;
    bool status_only = false;
    bool cli_modified = false;

    for (int i = 1; i < argc; ++i) {
        const char *arg = argv[i];
        if (strcmp(arg, "-h") == 0 || strcmp(arg, "--help") == 0) {
            print_help(argv[0]);
            return 0;
        } else if (strcmp(arg, "--status") == 0) {
            status_only = true;
        } else if (strcmp(arg, "--apply-only") == 0 || strcmp(arg, "--configure") == 0) {
            apply_only = true;
        } else if (strcmp(arg, "--gui") == 0) {
            force_gui = true;
        } else if (strcmp(arg, "--play") == 0 || strcmp(arg, "--no-gui") == 0) {
            no_gui = true;
        } else if ((strcmp(arg, "-r") == 0 || strcmp(arg, "--res") == 0) && i + 1 < argc) {
            int w = 0, h = 0;
            if (sscanf(argv[++i], "%dx%d", &w, &h) == 2 && w >= 320 && h >= 200) {
                cfg.width = w;
                cfg.height = h;
                sync_preset_index(&cfg);
                cli_modified = true;
            } else {
                fprintf(stderr, "[!] Invalid resolution '%s'. Expected format WxH (e.g. 1920x1080).\n", argv[i]);
                return 1;
            }
        } else if (strcmp(arg, "-f") == 0 || strcmp(arg, "--fullscreen") == 0) {
            cfg.fullscreen = true;
            cli_modified = true;
        } else if (strcmp(arg, "-w") == 0 || strcmp(arg, "--windowed") == 0) {
            cfg.fullscreen = false;
            cli_modified = true;
        } else if (strcmp(arg, "--fov") == 0 && i + 1 < argc) {
            double v = atof(argv[++i]);
            if (v >= 0.8 && v <= 3.0) {
                cfg.fov = v;
                cli_modified = true;
            } else {
                fprintf(stderr, "[!] FOV out of range (0.8..3.0): %s\n", argv[i]);
                return 1;
            }
        } else if (strcmp(arg, "--vsync") == 0 && i + 1 < argc) {
            ++i;
            cfg.vsync = (strcasecmp(argv[i], "on") == 0 || strcmp(argv[i], "1") == 0 || strcasecmp(argv[i], "true") == 0);
            cli_modified = true;
        } else if (strcmp(arg, "--msaa") == 0 && i + 1 < argc) {
            ++i;
            if (strcasecmp(argv[i], "off") == 0 || strcmp(argv[i], "0") == 0) cfg.msaa_idx = 0;
            else if (strcasecmp(argv[i], "2x") == 0 || strcmp(argv[i], "2") == 0) cfg.msaa_idx = 1;
            else if (strcasecmp(argv[i], "4x") == 0 || strcmp(argv[i], "4") == 0) cfg.msaa_idx = 2;
            else if (strcasecmp(argv[i], "8x") == 0 || strcmp(argv[i], "8") == 0) cfg.msaa_idx = 3;
            cli_modified = true;
        } else if (strcmp(arg, "--af") == 0 && i + 1 < argc) {
            ++i;
            cfg.anisotropic = (strcasecmp(argv[i], "on") == 0 || strcmp(argv[i], "1") == 0 || strcasecmp(argv[i], "true") == 0);
            cli_modified = true;
        } else if (strcmp(arg, "--skip-intro") == 0 && i + 1 < argc) {
            ++i;
            cfg.skip_intro = (strcasecmp(argv[i], "on") == 0 || strcmp(argv[i], "1") == 0 || strcasecmp(argv[i], "true") == 0);
            cli_modified = true;
        } else if (strcmp(arg, "--unlock-presets") == 0) {
            cfg.lock_res = false;
            cli_modified = true;
        } else {
            fprintf(stderr, "[!] Unknown option: %s (use --help for usage)\n", arg);
            return 1;
        }
    }

    if (status_only) {
        if (cli_modified) save_config(game_dir, &cfg);
        print_status(game_dir, &cfg);
        return 0;
    }

    if (apply_only) {
        if (!save_config(game_dir, &cfg)) return 1;
        print_status(game_dir, &cfg);
        printf("[+] Configuration saved to TRUCK.INI and dxcfg.ini.\n");
        return 0;
    }

    /* Show SDL2 GUI launcher if requested or if run with no arguments on a graphical display */
    bool has_display = (getenv("DISPLAY") != NULL || getenv("WAYLAND_DISPLAY") != NULL);
    if (force_gui || (!no_gui && !cli_modified && has_display)) {
        int gui_res = run_sdl2_launcher(&cfg);
        if (gui_res < 0) {
            printf("[*] Launcher closed without launching.\n");
            return 0;
        }
        save_config(game_dir, &cfg);
        if (gui_res == 0) {
            print_status(game_dir, &cfg);
            printf("[+] Settings saved.\n");
            return 0;
        }
    } else {
        save_config(game_dir, &cfg);
    }

    print_status(game_dir, &cfg);

    if (chdir(game_dir) != 0) {
        perror("Failed to chdir to game files directory");
        return 1;
    }

    /* Set WINEDLLOVERRIDES so Wine loads GOG's DirectDraw->D3D9 widescreen/scaling wrapper (ddraw.dll) */
    setenv("WINEDLLOVERRIDES", "ddraw=n,b", 1);

    /* Performance Optimizations:
     * - vblank_mode=0 / __GL_SYNC_TO_VBLANK=0: Disable driver-enforced vblank throttling on Mesa / Intel UHD / AMD / NVIDIA
     * - WINE_D3D_CONFIG=csmt=3: Enable Command Stream Multi-Threading in WineD3D for 2x-3x higher draw throughput
     * - WINEDEBUG=-all: Suppress wine debug/trace logging overhead to maximize framerates
     */
    setenv("vblank_mode", "0", 1);
    setenv("__GL_SYNC_TO_VBLANK", "0", 1);
    setenv("WINE_D3D_CONFIG", "csmt=3", 1);
    setenv("WINEDEBUG", "-all", 1);

    printf("[*] Launching Hard Truck 2: King of the Road (%dx%d)...\n", cfg.width, cfg.height);
    fflush(stdout);

    char *wine_argv[] = {"wine", "king.exe", NULL};
    execvp("wine", wine_argv);
    perror("Failed to execute wine");
    return 1;
}
