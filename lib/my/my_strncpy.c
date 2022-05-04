/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strncpy
*/

#include "./../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
