#!/bin/bash
gcc -Wall -pedantic -Werror -Wetra -c *.c
ar -re liball.a *.o
ranlib liball.a
