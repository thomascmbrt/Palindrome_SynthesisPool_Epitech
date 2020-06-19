/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** main.c
*/

#include "palindrome.h"

int main(int ac, char **av)
{
    params_t *params = init_struct();

    if (!params)
        return (84);
    if (ac == 2 && my_strcmp("-h", av[1]) == 0) {
        print_usage();
        return (0);
    } else if (ac < 3) {
        my_putstr("Invalid argument\n");
        return (84);
    }
    return (pars_my_arg(ac, av, params));
}