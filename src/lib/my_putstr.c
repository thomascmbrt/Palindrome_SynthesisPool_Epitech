/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
