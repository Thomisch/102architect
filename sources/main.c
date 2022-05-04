/*
** EPITECH PROJECT, 2021
** B-CPE-110-STG-1-1-BSQ-thomas.decaudain
** File description:
** main
*/

#include "./../include/102architect.h"

static void display_matrice(double *matrice)
{
    int offset = 0;

    while (offset < 9) {
        printf("%.2f", matrice[offset]);
        offset++;
        if (offset % 3 == 0)
            printf("\n");
        else
            printf("\t");
    }
}

int main(int argc, char **argv)
{
    double matrice[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
    double result[3];

    if (check_argv(argc, argv) == 84)
        return (84);
    result[0] = atof(argv[1]);
    result[1] = atof(argv[2]);
    result[2] = 1;
    check_option(result, matrice, argv, argc);
    display_matrice(matrice);
    printf("(%.2f,%.2f) => (%.2f,%.2f)\n", atof(argv[1]), atof(argv[2]), result[0], result[1]);
    return 0;
}
