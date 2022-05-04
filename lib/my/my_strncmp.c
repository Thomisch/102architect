/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday06-thomas.decaudain
** File description:
** my_strncmp
*/

#include "./../../include/my.h"

int my_strncmp(char const*s1, char const *s2, int n)
{
    int a = 0;

    while (s1[a] == s2[a] && a < n && s1[a] != '\0' && s2[a] != '\0')
        a++;
    if ((s1[a] == '\0' && s2[a] == '\0') || a == n)
        return (0);
    else if (s1[a] > s2[a])
        return (1);
    else
        return (-1);
}
