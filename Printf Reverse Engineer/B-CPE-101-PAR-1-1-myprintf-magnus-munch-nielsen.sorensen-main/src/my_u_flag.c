/*
** EPITECH PROJECT, 2023
** my_u_flag.c
** File description:
** Handles %u
*/

#include "my_headerfiles.h"

int my_u_flag(unsigned int nb)
{
    int count = 0;

    if (nb == 0) {
        my_putchar('0');
        count = count + 1;
        return 1;
    }
    while (nb > 0) {
        my_putchar('0' + (nb % 10));
        nb = nb / 10;
        count = count + 1;
    }
    return count;
}
