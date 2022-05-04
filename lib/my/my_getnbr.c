/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday04-thomas.decaudain
** File description:
** my_getnbr
*/

#include "./../../include/my.h"

long is_neg(char c, long result)
{
    if (c == '-')
        result = result * (-1);
    return (result);
}

int my_getnbr(char const *str)
{
    int compteur = 0;
    int i = 0;
    long result = 1;
    int new_nbr;

    while (str[i] != '\0') {
        if (str[i] == '+' || str[i] == '-') {
            result = is_neg(str[i], result);
        } else if (str[i] >= '0' && str[i] < '9') {
            compteur = compteur * 10;
            compteur = compteur + str[i] - '0';
        }
        i++;
    }
    if (compteur < -2147483648 || compteur > 2147483648) {
        return (0);
    } else {
        new_nbr = compteur * result;
        return (new_nbr);
    }
}
