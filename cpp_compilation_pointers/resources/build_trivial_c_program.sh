# Create compilation units
cc -Wall -O0 -std=c99 -g -c -o add.o add.c 
cc -Wall -O0 -std=c99 -g -c -o simple.o simple.c
# Link them
cc -o output add.o simple.o
# Execute (not an exe if not on Windows)
./output.exe