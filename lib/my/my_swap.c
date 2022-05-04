/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday04-thomas.decaudain
** File description:
** my_swap
*/

#include "./../../include/my.h"

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
