#!/bin/bash
gcc -Wall -Wextra -pendantic -c *.c
ar rc liball.a *.o
