mkdir -p build-unix # Create the directory in which to build the executable
cd build-unix # Change Directory to this one
# Generate Makefiles for UNIX, there are also options like "MinGW Makefiles" 
cmake -G "Unix Makefiles" .. # or "Visual Studio 16 2019"
# New files: "cmake_install.cmake" and "Makefile"
make # This will run the Makefile and create executable
# Run it with
./toDo.exe