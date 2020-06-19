/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_strlen.c
*/

#include "my.h"

int my_strlen(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0')
        counter++;
    return (counter);
}