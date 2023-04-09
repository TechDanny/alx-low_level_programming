#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liballa.a *.o
