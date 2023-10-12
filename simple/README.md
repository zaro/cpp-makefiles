# Basic generic Makefile for CPP

This structure assumes 1 CPP file per executable, the name of the executable is the same as the cpp file.

You can configure the compilation flags by setting the CXX_FLAGS variable at the top.

# Examples

```shell
# compile each *.cpp to respective .exe
make
# compile example.exe from example.cpp
make example.exe
# clean/remove all compiles .exe
make clean
```
