#define RLIGHTS_IMPLEMENTATION
#define RICONS_IMPLEMENTATION
#define RAYGUI_IMPLEMENTATION
#define RAYGUI_SUPPORT_ICONS
#define RLGL_IMPLEMENTATION
#define RLGL_SUPPORT_TRACELOG

#if !defined(TRACELOG)
    #define TRACELOG(level, ...) (void)0
    #define TRACELOGD(...) (void)0
#endif

#include "rlgl.h"
#include "raygui.h"
#include "rlights.h"
