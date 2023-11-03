/*
** EPITECH PROJECT, 2023
** my_printf.c
** File description:
** My printf function
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_headerfiles.h"

int print_char_with_count(int *nb, char c)
{
    my_putchar(c);
    (*nb)++;
}

int handle_format_specifier(int *nb, va_list ap, const char **format)
{
    (*format)++;
    *nb += handle_format(ap, *format);
    while (**format >= '0' && **format <= '9') {
        (*format)++;
    }
    (*format)++;
}

int my_printf(const char *format, ...)
{
    int nb = 0;
    va_list ap;

    va_start(ap, format);
    if (!(*format)) {
        return -1;
    }
    while (*format) {
        if (*format != '%') {
            print_char_with_count(&nb, *format);
            format++;
        } else {
            handle_format_specifier(&nb, ap, &format);
        }
    }
    va_end(ap);
    return nb;
}
