/*
** EPITECH PROJECT, 2023
** my_X_flag.c
** File description:
** my X flag for the printf function
*/

#include "my_headerfiles.h"

static int reverse_int(int i, char *hexadecimal)
{
    int cnt;
    int let_wri;

    let_wri = 0;
    for (cnt = i - 1; cnt > 0; cnt--) {
        my_putchar(hexadecimal[cnt]);
        let_wri = let_wri + 1;
    }
    return (let_wri);
}

int my_capital_x_flag(int nb)
{
    char hexadecimal[100];
    int i = 1;
    int modules;
    int let_wri;

    while (nb != 0) {
        modules = nb % 16;
        if (modules < 10) {
            modules = modules + 48;
        } else {
            modules = modules + 55;
                }
        hexadecimal[i] = modules;
        i++;
        nb = nb / 16;
    }
    let_wri = reverse_int(i, hexadecimal);
    return (let_wri);
}
