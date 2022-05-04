/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday05-thomas.decaudain
** File description:
** my_compute_square_root.c
*/

#include "./../../include/my.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    for (; i * i != nb; i++) {
        if (i * i > nb) {
            return (0);
        }
    }
    return (i);
}
