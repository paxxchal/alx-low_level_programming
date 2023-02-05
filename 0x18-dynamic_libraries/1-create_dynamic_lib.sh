#!/bin/bash

# Compile all .c files in the current directory
gcc -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
