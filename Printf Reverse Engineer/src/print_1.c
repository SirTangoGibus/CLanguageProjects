/*
** EPITECH PROJECT, 2023
** print1.c
** File description:
** none
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_headerfiles.h"

int handle_string(va_list ap)
{
    return my_putstr(va_arg(ap, char *));
}

int handle_integer(va_list ap)
{
    int i = va_arg(ap, int);

    return my_put_nbr(i);
}

int handle_char(va_list ap)
{
    my_putchar((char)va_arg(ap, int));
    return 1;
}

int handle_percent(void)
{
    my_putchar('%');
    return 1;
}
