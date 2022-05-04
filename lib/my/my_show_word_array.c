/*
** EPITECH PROJECT, 2021
** B-CPE-100-STG-1-1-cpoolday08-thomas.decaudain
** File description:
** my_show_word_array
*/

#include "./../../include/my.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != '\0'; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++) {
            my_putchar(tab[i][j]);
        }
        write(1, "\n", 1);
    }
    return (0);
}
