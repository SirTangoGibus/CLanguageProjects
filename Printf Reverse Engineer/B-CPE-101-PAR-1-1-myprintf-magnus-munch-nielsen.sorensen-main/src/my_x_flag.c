/*
** EPITECH PROJECT, 2023
** my_x_flag.c
** File description:
** The x flag for the function printf
*/

#include "my_headerfiles.h"

static char my_switch_capital(char *hexadecimal)
{
    switch (hexadecimal[1]) {
        case 'A':
            hexadecimal[1] = 'a';
            break;
        case 'B':
            hexadecimal[1] = 'b';
            break;
        case 'C':
            hexadecimal[1] = 'c';
            break;
        case 'D':
            hexadecimal[1] = 'd';
            break;
        case 'E':
            hexadecimal[1] = 'e';
            break;
        case 'F':
            hexadecimal[1] = 'f';
            break;
        }
}

static int rev_int(int i, char *hexadecimal)
{
    int cnt;
    int let_wri;

    let_wri = 0;
    for (cnt = i - 1; cnt > 0; cnt--) {
        my_switch_capital(hexadecimal);
        my_putchar(hexadecimal[cnt]);
        let_wri = let_wri + 1;
    }
    return (let_wri);
}

int my_x_flag(int nb)
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
    let_wri = rev_int(i, hexadecimal);
    return (let_wri);
}
