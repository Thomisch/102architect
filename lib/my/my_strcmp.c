/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strcmp
*/

#include "./../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j]) {
        i = i + 1;
        j = j + 1;
    }
    return (s2[j] - s1[i]);
}
