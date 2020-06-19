/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** cases.c
*/

#include "palindrome.h"

int case_n(char *number, params_t *params)
{
    int size = (my_strlen(number));
    char *result = malloc(sizeof(char) * (size + 1));
    int state = 2;
    int number_iterations = 0;
    char *base = my_strcpy(number);
    char *tmp = NULL;

    result[size] = '\0';
    for (int i = 0; i != size; i++)
        result[i] = '0';
    if (case_one(number, params) == 1) {
        free(result);
        return (1);
    }
    while (state != 0) {
        result = do_op(base, result);
        tmp = my_strcpy(result);
        tmp = my_revstr(tmp);
        number_iterations++;
        state = my_strcmp(result, tmp);
        base = my_strcpy(result);
        if (number_iterations > params->imax) {
            state = 1;
            break;
        }
    }
    if (state == 0 && number_iterations
    >= params->imin) {
        print_info(number, result, number_iterations, params->base);
        free_all(result, base, tmp);
        return (0);
    } else if (state != 1 && number_iterations > params->imax) {
        my_putstr("no solution\n");
        free_all(result, base, tmp);
        return (0);
    } else if (state == 0 && number_iterations < params->imin) {
        my_putstr("no solution\n");
        free_all(result, base, tmp);
        return (0);
    }
    return (0);
}

int case_one(char *number, params_t *params)
{
    if (number[0] >= '0' && number[0] <= '9'
    && number[1] == '\0') {
        print_one(number, params->base);
        return (0);
    } else {
        for (int i = 0; number[i] != '\0'; i++) {
            if (number[i] == number[i+1]) {
                print_same_nb(number, params->base);
                return (0);
            }
        }
    }
    return (0);
}

int case_p(char *number, params_t *params)
{
    int nb_received = my_getnbr(number);

    if (nb_received < 2) {
        my_putstr("no solution");
        return (84);
    }
    do_my_p(nb_received, params);
    print_p(nb_received, nb_received, 0, params->base);
    return (0);
}