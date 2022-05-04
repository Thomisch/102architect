/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strupcase
*/

#include "./../../include/my.h"

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;
        i = i + 1;
    }
    return (str);
}
