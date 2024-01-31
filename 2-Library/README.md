## Introduction
In this folder we will compile library and link it with our main.cpp file in various ways.
Check CMakeLists files for explained commands.

Inside CMake1 folder we are directly compiling main.cpp and math.cpp to create an executable, 
and also specifying that during the compilation of executable the 'math' directory should be
included in the search path for header files.

Inside CMake2 folder we are creating a library from math.cpp file, adding it to project with
add_subdirectory() and then later on link it using target_link_libraries().

Inside CMake3 folder linking is the same as in CMake2 folder, but this time we are creating 
a header only library so there are some changes inside math/CMakeLists.txt file.

Check it out yourself :D

To try to build it youself, follow this instructions:

```bash
cd CMake<1,2,3>
mkdir build
cd build/
cmake ..                    # generate build files

make example                # build executable using make
```

or using CMake directly inside build folder:

```bash
cmake --build . --target example
```

Now we have executable which we can run:

```bash
./example
```