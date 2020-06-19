/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** op.c
*/

#include "palindrome.h"

char *do_op(char *number, char *result)
{
    int size = (my_strlen(number) - 1);
    int res = 0;

    result = calul_for_n(result, number, size, res);
    result = my_revstr(result);
    return (result);
}

int do_p(int result, int nb_start)
{
    int tmp = nb_start;

    tmp = my_int_rev(tmp);
    result = tmp + nb_start;
    return (result);
}

char *calul_for_n(char *result, char *number, int size, int res)
{
    char *temp = my_strcpy(number);

    temp = my_revstr(temp);
    for (; size >= 0; size--) {
        result[size] = ((number[size] - 48) + (temp[size] - 48)
        + res) + 48;
        res = 0;
        if (result[size] > '9') {
            res = 1;
            result[size] = ((result[size] - 48) % 10) + '0';
        }
        if (res != 0 && size == 0) {
            res = 1;
            result = re_alloc_result(result, res, (size + 2));
        }
    }
    free(temp);
    return (result);
}

void do_my_p(int nb_received, params_t *params)
{
    int tmp = 2;
    int result = 0;
    int nb_of_it = 0;

    for (int nb_start = 2; nb_start <= nb_received; nb_start++) {
        tmp = nb_start;
        while (result < nb_received && nb_of_it < params->imax) {
            result = do_p(result, tmp);
            tmp = result;
            nb_of_it += 1;
        }
        if (result == nb_received) {
            print_p(nb_start, nb_received, nb_of_it, params->base);
            result = 0;
            nb_of_it = 0;
        }
        else {
            result = 0;
            nb_of_it = 0;
        }
    }
}