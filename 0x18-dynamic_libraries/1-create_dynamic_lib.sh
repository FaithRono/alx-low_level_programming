#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc *.o -shared -o liball.so
