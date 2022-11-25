# LuaJIT-GL
LuaJIT binding to OpenGL

Usage
-----

To load the library, use the `require` function:

```lua
local luajit_glfw = require "glfw" -- from https://github.com/sonoro1234/LuaJIT-GLFW
local luajit_gl = require "gl"
luajit_gl.set_loader(luajit_glfw) -- also can be SDL2 from https://github.com/sonoro1234/LuaJIT-SDL2
```

LuaJIT-GL loads the following libraries:


* `luajit_gl.gl`: OpenGL
* `luajit_gl.glc`: `#defined` values for OpenGL (this must be a Lua table instead of `static const` values, because OpenGL uses `longs` in a couple of places)
* `luajit_gl.glu`: GLU
* `luajit_gl.glext`: A table that, when indexed, loads and returns the specified extension function. Ex. `glext.glMyExtFuncARB(p1, p2)`

You can also use the following snippet to concisely localize the libraries.

```lua
local gl, glc, glu, glext = luajit_gl.libraries()
```
