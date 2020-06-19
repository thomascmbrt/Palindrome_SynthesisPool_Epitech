/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** calcul.c
*/

#include "palindrome.h"

char *re_alloc_result(char *number, int restained, int size)
{
    char *result =  malloc(sizeof(char) * size);
    int j = 1;

    if (!result)
        return (NULL);
    for (int i = 0; number[i] != '\0'; i++, j++)
        result[j] = number[i];
    result[j] = '\0';
    result[0] = restained + 48;
    return (result);
}