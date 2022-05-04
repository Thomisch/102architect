/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday05-thomas.decaudain
** File description:
** my_is_prime.c
*/

#include "./../../include/my.h"

int my_is_prime(int nb)
{
    int i;
    if (nb == 2)
        return (1);
    if (nb <= 1)
        return (0);

    for (i = 2; i <= nb / 2; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}
