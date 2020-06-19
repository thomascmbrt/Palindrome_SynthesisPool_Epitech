/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** usage.c
*/

#include "my.h"

void print_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("      ./palindrome -n number -p ");
    my_putstr("palindrome [-b base] [-imin i] [-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      -n n      integer to be transformed (>=0)\n");
    my_putstr("      -p pal    palindromic number to be obtained (incompatib");
    my_putstr("le with the -n option) (>=0)\n");
    my_putstr("                if defined, all fitting values of n will ");
    my_putstr("be output\n");
    my_putstr("      -b base   base in which the procedure will be executed");
    my_putstr(" (1<b<=10) [def: 10]\n");
    my_putstr("      -imin i   minimum number of iterations, included (>=0)");
    my_putstr(" [def: 0]\n");
    my_putstr("      -imax i   maximum number of iterations, included (>=0)");
    my_putstr(" [def: 100]\n");
}