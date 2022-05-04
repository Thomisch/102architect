/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_str_isalpha
*/

#include "./../../include/my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 'a' || str[i] < 'z'
        || str[i] > 'A' || str[i] < 'Z')
            i++;
        else
            return (0);
    }
    return (1);
}
