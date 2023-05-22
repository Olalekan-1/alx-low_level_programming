#!/bin/bash

# Compile all .c files into object files
for file in *.c
do
    gcc -c -fpic $file
done

# Create the static library and add the object files to it
gcc *.o -shared -o liball.so

# Clean up by removing the object files
rm *.o

echo "Dynamic library liball.so created successfully!"

