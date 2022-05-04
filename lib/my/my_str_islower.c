/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_str_islower
*/

#include "./../../include/my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
    }
    return (1);
}
