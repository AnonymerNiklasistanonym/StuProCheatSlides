mkdir -p build-unix # Create the directory in which to build the executable
cd build-unix       # and change directory to this one
# Generate Makefiles for UNIX, there are also options like "MinGW Makefiles" 
cmake -G "Unix Makefiles" .. # or even "Visual Studio 16 2019"
# Newly created files: "cmake_install.cmake" and "Makefile"
make # This will run the Makefile and create the executable
# Run the executable with
./toDo.exe