/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** free.c
*/

#include "palindrome.h"

void free_all(char *result, char *base, char *tmp)
{
        free(result);
        free(base);
        free(tmp);
}