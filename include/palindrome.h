/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** palindrome.h
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include "my.h"
#include "struct.h"

//project
char *do_op(char *number, char *result);
int do_p(int result, int nb_received);
int check_palindrome(char *result);
char *re_alloc_result(char *number, int restained, int size);
char *check_my_array(char *str, int size);

//op
int case_n(char *number, params_t *params);
char *calul_for_n(char *result, char *number, int size, int res);
int case_one(char *number, params_t *params);
int case_p(char *number, params_t *params);
void do_my_p(int nb_received, params_t *params);

//init
params_t *init_struct(void);


//clean
void free_all(char *result, char *base, char *tmp);

//parsing
int pars_my_arg(int ac, char **av, params_t *params);
int pars_my_option(int ac, char **av, params_t *params);

//print
void print_info(char *number, char *result, int nb, int base);
void print_one(char *number, int base);
void print_same_nb(char *number, int base);
void print_usage(void);
void print_p(int nb_start, int number, int nb_of_it, int base);

//error managment
int invalid_number(char *arg);
int invalid_arg(char *arg);

#endif