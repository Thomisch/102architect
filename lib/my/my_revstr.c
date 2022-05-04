/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_revstr
*/

#include "./../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int c = 0;
    int tempvar = 0;

    while (str[c] != '\0')
        c = c + 1;
    c = c - 1;
    while (i < c) {
        tempvar = str[i];
        str[i] = str[c];
        str[c] = tempvar;
        i = i + 1;
        c = c - 1;
    }
    return (str);
}
