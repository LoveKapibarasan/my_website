# Make
* Build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles.

```makefile
# Build the program
myapp: main.cpp utils.cpp
	g++ -o myapp main.cpp utils.cpp

# Clean up
clean:
	rm -f myapp
```

```bash
make # = make all
make install
# install copies the built files to system directories.
make clean 
# removes all files that were generated during the build process, giving you a fresh start
```


### CMake
Tool that generates build files (like Makefiles)
CMake is a cross-platform build system generator widely used for managing the build process of C/C++ projects.

CMakeLists.txt file in project's root
```cmake
cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(myapp main.cpp)
```


### Run CMake
```bash
cmake ..
```



