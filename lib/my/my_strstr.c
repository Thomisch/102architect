/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strstr
*/

#include "./../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (str[0] == '\0')
        return (0);
    while (to_find[i] != '\0') {
        if (to_find[i] != str[i]) {
            return (my_strstr(str + 1, to_find));
            i = i + 1;
        }
    }
    return (str);
}
