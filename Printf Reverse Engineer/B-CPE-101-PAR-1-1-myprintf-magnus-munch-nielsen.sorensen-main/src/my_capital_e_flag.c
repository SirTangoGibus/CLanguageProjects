/*
** EPITECH PROJECT, 2023
** my_capital_e_flag.c
** File description:
** my_e_flag for the printf function
*/

#include "my_headerfiles.h"

static int write_end_cap(int return_val, int cnt)
{
    for (int i = 0; i <= cnt; i++) {
        my_putchar('0');
        return_val = return_val + 1;
    }
    my_putchar('E');
    my_putchar('+');
    my_putchar('0');
    return_val = return_val + 3;
    return_val = return_val + my_put_nbr(cnt);
    return (return_val);
}

int my_capital_e_flag(double nb)
{
    int cnt = 0;
    double digits = nb;
    int return_val = 0;
    int zero = 0;

    while (digits > 1) {
        digits = digits / 10;
        cnt++;
    }
    for (int i = 1; i < cnt; i++) {
        nb = nb / 10;
    }
    return_val = return_val + my_put_float(nb);
    return_val = return_val + write_end_cap(return_val, cnt);
    return (return_val);
}
