/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char string_temp[my_strlen(str)];

    while (i != my_strlen(str)) {
        string_temp[i] = str[i];
        i++;
    }
    while (i != 0) {
        str[j] = string_temp[i - 1];
        i--;
        j++;
    }
    return (str);
}