/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** parsing.c
*/

#include "palindrome.h"

int pars_my_option(int ac, char **av, params_t *params)
{
    static int i = 3;
    int state = 0;

    if (i <= ac) {
        if (ac >= i && my_strcmp("-imin", av[i]) == 0) {
            state = invalid_number(av[i + 1]);
            params->imin = my_getnbr(av[i+1]);
        } else if (ac >= i && my_strcmp("-imax", av[i]) == 0) {
            state = invalid_number(av[i + 1]);
            params->imax = my_getnbr(av[i+1]);
        } else if (ac >= i && my_strcmp("-b", av[i]) == 0) {
            state = invalid_number(av[i + 1]);
            params->base = my_getnbr(av[i+1]);
        }
    }
    if (state == 84 || params->imin > params->imax || params->base == 0) {
        my_putstr("invalid argument\n");
        return (84);
    }
    i++;
    if (i <= ac)
        return (pars_my_option(ac, av, params));
    return (0);
}

int pars_my_arg(int ac, char **av, params_t *params)
{
    if (my_strcmp("-n", av[1]) == 0
    && invalid_number(av[2]) != 84
    ) {
        if (pars_my_option(ac, av, params) == 84) {
            free(params);
            return (84);
        }
        return (case_n(av[2], params));
    } else if (my_strcmp("-p", av[1]) == 0
    && invalid_number(av[2]) != 84) {
        if (pars_my_option(ac, av, params) == 84) {
            free(params);
            return (84);
        }
        return (case_p(av[2], params));
    } else {
        free(params);
        my_putstr("invalid argument\n");
        return (84);
    }
    return (0);
}