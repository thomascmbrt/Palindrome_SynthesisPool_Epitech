/*
** EPITECH PROJECT, 2019
** SYN_palindrome_2019
** File description:
** requirement.c
*/

int my_factrec_synthesis(int nb)
{
    static int result = 1;
    static int calcul = 0;
    static int i = 1;

    if (nb == 0)
        return (1);
    else if (nb < 0 || nb >= 13)
        return (0);
    while (i != nb) {
        calcul = result * i;
        result = calcul + result;
        i++;
        my_factrec_synthesis(nb);
    }
    return (result);
}

int my_squareroot_synthesis(int nb)
{
    int calcul = 0;
    int result = 0;

    if (nb < 0)
        return (-1);
    if (nb == 1)
        return (1);
    for (int i = 0; calcul < nb; i++) {
        calcul = i * i;
        if (calcul > nb)
            return (-1);
        result = i;
    }
    return (result);
}