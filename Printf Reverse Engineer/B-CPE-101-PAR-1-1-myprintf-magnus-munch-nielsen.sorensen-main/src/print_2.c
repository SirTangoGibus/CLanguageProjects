/*
** EPITECH PROJECT, 2023
** print_2.c
** File description:
** none
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_headerfiles.h"

int handle_u(va_list ap)
{
    return my_u_flag(va_arg(ap, unsigned int));
}

int handle_o(va_list ap)
{
    int i = va_arg(ap, int);

    return my_o_flag(i);
}

int handle_n(va_list ap, int cnt)
{
    return my_n_flag(va_arg(ap, int *));
}
