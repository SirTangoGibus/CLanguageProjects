/*
** EPITECH PROJECT, 2023
** my_put_float.c
** File description:
** float for my_printf
*/

#include "my_headerfiles.h"

static int after_dot(double nb, double placeholder, int cnt, int return_val)
{
    int x = nb;
    int i;
    int z;
    int times = 10;
    int substract;

    for (int g = 0; g <= cnt; g++) {
        placeholder = placeholder * 10;
    }
    for (int f = 0; f < cnt; f++) {
        times = times * 10;
    }
    i = x * times;
    z = placeholder;
    substract = z % i;
    return_val = return_val + my_put_nbr(nb);
    my_putchar('.');
    return_val = return_val + 1;
    return_val = return_val + my_put_nbr(substract);
    return (return_val);
}

int my_put_float(double nb)
{
    int cnt = 0;
    double digits = nb;
    double placeholder = nb;
    int return_val = 0;

    while (digits > 1) {
        digits = digits / 10;
        cnt++;
    }
    return_val = after_dot(nb, placeholder, cnt, return_val);
    return (return_val);
}
