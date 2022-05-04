/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday04-thomas.decaudain
** File description:
** my_sort_int_array
*/

#include "./../../include/my.h"

void my_sort_int_array(int *array, int size)
{
    int tmp = 0;

    for (int i = 0; i != size; i++) {
        if (i > 0 && array[i] < array[i - 1]) {
            tmp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = tmp;
            i -= 2;
        }
    }
}
