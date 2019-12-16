#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc *.o -shared -o liball.so
