## Introduction
In this folder we will touch on building our first source code. If we want to compile it using compiler directly this is how we would do it(depending on which platform you are, you would have different compiler, for Linux it is g++):

```bash
g++ hello_world.cpp -o hello_world
```

"hello_world.cpp" was compiled into object file and linked to hello_world executable.

Run the executable to make it print out "hello world":

```bash
./hello_world
```

If we want to use make build system to automate it a little bit, we need to run makefile, to do it we just run it like this:

```bash
cd Make
make
```

This will also create hello_world executable which we can run:

```bash
./hello_world
```

If we want to use cmake we will do it this way:

```bash
cd CMake
mkdir build
cd build/
cmake ..

make hello_world
```

or using CMake directly inside build folder:

```bash
cmake --build . --target hello_world
```

Now we have executable which we can run:

```bash
./hello_world
```

Summary: 
Here I wanted to show you basic introduction how to compile a cpp file, using cli, make and at last cmake. There are not much differences right now in complexity, but as we progress we will see cmake should be easier to use.