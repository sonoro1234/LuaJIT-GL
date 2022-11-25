PROJECT(GL_ffi)
#to allow install from subdirectory
cmake_minimum_required(VERSION 3.13)

INSTALL(FILES gl.lua DESTINATION ${LUAJIT_BIN}/lua)