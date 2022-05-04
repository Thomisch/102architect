/*
** EPITECH PROJECT, 2021
** CPoolDay03 task04
** File description:
** my_isneg.c
*/

#include "./../../include/my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    write(1, "\n", 1);
    return (0);
}
