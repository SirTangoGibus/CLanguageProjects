/*
** EPITECH PROJECT, 2023
** print_3.c
** File description:
** none
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_headerfiles.h"

int handle_x(va_list ap)
{
    int x = va_arg(ap, int);

    return my_x_flag(x);
}

int handle_xup(va_list ap)
{
    int X = va_arg(ap, int);

    return my_capital_x_flag(X);
}
