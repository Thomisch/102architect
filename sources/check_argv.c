/*
** EPITECH PROJECT, 2021
** B-MAT-100-STG-1-1-102architect-alban.grandmougin-zink
** File description:
** check_argv
*/

#include "./../include/102architect.h"

int check_argv(int argc, char **argv)
{
    if (argc < 5) {
        printf("./102architect take at least 4 arguments\n");
        return (84);
    }
    if (my_str_isnum(argv[1]) != 1 || my_str_isnum(argv[2]) != 1) {
        printf("argv[1] and argv[2] have to be numbers\n");
        return (84);
    }
    for (int i = 3; argv[i] != NULL || i <= argc;) {
        if (argv[i][0] != '-' && argv[i][1] != 't' && argv[i][1] != 'z' &&
            argv[i][1] != 'r' && argv[i][1] != 's') {
            printf("Invalid flag\n");
            printf("option : -t -z -r or -s\n");
            return (84);
        } else if (argv[i][0] == '-' && argv[i][1] == 't' || argv[i][1] == 'z') {
            if (my_str_isnum(argv[i + 1]) != 1 || my_str_isnum(argv[i + 2]) != 1) {
                printf("-t or -v has to be followed by 2 nbrs\n");
                return (84);
            }
            if ((i + 3) >= argc)
                return (0);
            i += 3;
        } else if (argv[i][1] == 'r' || argv[i][1] == 's') {
            if (my_str_isnum(argv[i + 1]) != 1) {
                printf("-r or -s has to be followed by 1 nbr\n");
                return (84);
            }
            if ((i + 2) >= argc)
                return (0);
            i += 2;
        }
    }
    return (0);
}
