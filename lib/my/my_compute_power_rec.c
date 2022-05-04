/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday05-thomas.decaudain
** File description:
** my_compute_power_rec.c
*/

#include "./../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p != 0)
        return (nb * my_compute_power_rec(nb, p - 1));
    else
        return 1;
}
