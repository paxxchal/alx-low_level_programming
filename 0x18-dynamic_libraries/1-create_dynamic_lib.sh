#!/bin/bash

# Compile all .c files in the current directory into a dynamic library
gcc -shared -o liball.so *.c

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so has been successfully created."
else
    echo "Compilation failed. Check for errors in your .c files."
fi
