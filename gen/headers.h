
// APIENTRY is defined as __stdcall in windows, and empty on others.
// Callback function pointer typedefs need to be marked as stdcall under Windows,
// even if glfw.lua was built on another system, so override this macro
// and scan for it in cdef.py
//#define APIENTRY GL_APIENTRY
#define APIENTRY
#include <GL/gl.h>
#include <GL/glu.h>
#include "glext.h"
