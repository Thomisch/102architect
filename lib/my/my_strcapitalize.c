/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strcapitalize
*/

#include "./../../include/my.h"

char *my_strcapitalize(char *str)
{
    int i = (-1);
    int j = 1;
    while (str[(i = i + 1)] != '\0') {
        if (str[i] <= 'z' && str[i] > 'a' && j) {
            j = 0;
            str[i] = str[i] - 32;
        }
        if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
            j = 1;
    }
    return (str);
}
