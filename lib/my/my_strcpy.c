/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strcpy
*/

#include "./../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
