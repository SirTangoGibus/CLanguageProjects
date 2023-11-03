/*
** EPITECH PROJECT, 2023
** my_o_flag.c
** File description:
** The o flag for printf
*/

#include "my_headerfiles.h"

static int rev_int(int i, int *modules)
{
    int cnt;
    int let_wri;

    let_wri = 0;
    for (cnt = i - 1; cnt >= 0; cnt--) {
        my_put_nbr(modules[cnt]);
        let_wri = let_wri + 1;
    }
    return (let_wri);
}

int my_o_flag(int nb)
{
    int modules[100];
    int i = 0;
    int let_wri;

    while (nb != 0) {
        modules[i] = nb % 8;
        nb = nb / 8;
        i++;
    }
    let_wri = rev_int(i, modules);
    return (let_wri);
}
