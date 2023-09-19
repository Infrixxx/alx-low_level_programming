#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o

# Check for compilation errors
if [ $? -eq 0 ]; then
  echo "All functions found :)"
  exit 0
else
  echo "Compilation failed :("
  exit 1
fi
