/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** print_info.c
*/

#include "palindrome.h"

void print_info(char *number, char *result, int nb, int base)
{
    my_putstr(number);
    my_putstr(" leads to ");
    my_putstr(result);
    my_putstr(" in ");
    my_put_nbr(nb);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(base);
    write(1, "\n", 1);
}

void print_one(char *number, int base)
{
    my_putstr(number);
    my_putstr(" leads to ");
    my_putstr(number);
    my_putstr(" in ");
    my_putstr("0");
    my_putstr(" iteration(s) in base ");
    my_put_nbr(base);
    write(1, "\n", 1);
}

void print_same_nb(char *number, int base)
{
    my_putstr(number);
    my_putstr(" leads to ");
    my_putstr(number);
    my_putstr(" in ");
    my_putstr("0");
    my_putstr(" iteration(s) in base ");
    my_put_nbr(base);
    write(1, "\n", 1);
}

void print_p(int nb_start, int number, int nb_of_it, int base)
{
    my_put_nbr(nb_start);
    my_putstr(" leads to ");
    my_put_nbr(number);
    my_putstr(" in ");
    my_put_nbr(nb_of_it);
    my_putstr(" iteration(s) in base ");
    my_put_nbr(base);
    write(1, "\n", 1);
}