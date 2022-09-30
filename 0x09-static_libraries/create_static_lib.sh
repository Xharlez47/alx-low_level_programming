#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o *.c
ar rc liball.a *a.o
