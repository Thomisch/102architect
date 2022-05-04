/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_str_isprintable
*/

#include "./../../include/my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127)
            return (0);
    }
    return (1);
}
