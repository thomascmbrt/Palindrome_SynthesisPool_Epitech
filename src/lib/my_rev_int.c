/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** my_rev_int.c
*/

#include "my.h"

int my_int_rev(int nb)
{
    int my_rev = 0;
    int end = 0;

    while (nb != 0) {
        end = nb % 10;
        my_rev = my_rev * 10 + end;
        nb /= 10;
    }
    return (my_rev);
}