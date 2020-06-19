/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** check_palindrome.c
*/

#include "palindrome.h"

int check_palindrome(char *result)
{
    char *tmp = my_strcpy(result);

    tmp = my_revstr(result);
    if (my_strcmp(result, tmp) == 0)
        return (0);
    else
        return (1);
}