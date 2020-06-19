/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** init_struct.c
*/

#include "palindrome.h"

params_t *init_struct(void)
{
    params_t *params = malloc(sizeof(params_t));

    params->imax = 100;
    params->imin = 0;
    params->base = 10;
    params->number = 0;
    return (params);
}