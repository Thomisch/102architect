/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday05-thomas.decaudain
** File description:
** my_find_prime_sup.c
*/

#include "./../../include/my.h"

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
        return (2);
    for (; my_is_prime(nb); nb++);
    return (nb);
}
