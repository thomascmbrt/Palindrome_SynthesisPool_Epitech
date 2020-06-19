/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** manage_error.c
*/

#include "palindrome.h"

int invalid_arg(char *arg)
{
    if (arg == NULL)
        return (84);
    if (my_strcmp("-", arg) != 0)
        return (84);
    else if (arg[2] < 97 || arg[2] > 122)
        return (84);
    return (0);
}

int invalid_number(char *arg)
{
    if (arg == NULL)
        return (84);
    for (int i = 0; arg[i] != '\0'; i++) {
        if (arg[i] < '0' || arg[i] > '9')
            return (84);
    }
    return (0);
}