/*
** EPITECH PROJECT, 2019
** mr_strcpy.c
** File description:
** copy the source of a string
*/

#include "my.h"

char *my_strcpy(char const *src)
{
    int i = 0;
    int size = my_strlen(src);
    char *dest = malloc(sizeof(char) * (size + 1));

    while (i != size) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}