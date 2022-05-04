/*
** EPITECH PROJECT, 2021
** B-MAT-100-STG-1-1-102architect-alban.grandmougin-zink
** File description:
** 102architect
*/

#include "102architect.h"

static bool check_flag(char *param, char flag) {
    return (param[0] == '-' && param[1] == flag && !param[2]);
}

static void translation(double *res, double *matrice, char **av, int offset)
{
    double trans_x = atof(av[offset + 1]);
    double trans_y = atof(av[offset + 2]);

    matrice[2] += trans_x;
    matrice[5] += trans_y;
    if (matrice[2] == 0)
        matrice[2] = 0;
    if (matrice[5] == 0)
        matrice[5] = 0;
    printf("Translation along vector (%.0f, %.0f)\n", trans_x, trans_y);
    res[0] += trans_x;
    res[1] += trans_y;
}

static void scaling(double *res, double *matrice, char **av, int offset)
{
    double homo_x = atof(av[offset + 1]);
    double homo_y = atof(av[offset + 2]);

    for (int i = 0; i < 6; i++) {
        matrice[i] *= ((i <= 2) ? homo_x : homo_y);
        if (matrice[i] == 0)
            matrice[i] = 0;
    }
    printf("Scaling by factors %.0f and %.0f\n", homo_x, homo_y);
    res[0] *= homo_x;
    res[1] *= homo_y;
}

void check_option(double *res, double *matrice, char **av, int ac)
{
    for (int i = 3; i < ac; ) {
        if (check_flag(av[i], 't') || check_flag(av[i], 'z')) {
            if (check_flag(av[i], 't'))
                translation(res, matrice, av, i);
            else
                scaling(res, matrice, av, i);
            i += 3;
        }
    }
}