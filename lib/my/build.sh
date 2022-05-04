#!/bin/bash
gcc -c -Wall *.c
ar rc libmy.a *.o
rm *.o