/*
** EPITECH PROJECT, 2023
** my_switchcase.c
** File description:
** Contains switch function
*/

#include <stdarg.h>
#include <stdio.h>
#include "my_headerfiles.h"

void my_zero_pad(int value, int width)
{
    int value_width = 1;
    int temp_value = value / 10;

    if (value < 0) {
        my_putchar('-');
        value = -value;
        width--;
    }
    while (temp_value != 0) {
        value_width++;
        temp_value /= 10;
    }
    while (width > value_width) {
        my_putchar('0');
        width--;
    }
    my_put_nbr(value);
}

int handle_zero_padded_format(va_list ap, const char *format)
{
    int width = 0;
    int value = va_arg(ap, int);

    format++;
    while (*format >= '0' && *format <= '9') {
        width = width * 10 + (*format - '0');
        format++;
    }
    if (*format == 'd' || *format == 'i' || *format == 'o'
        || *format == 'u' || *format == 'x' || *format == 'X') {
        my_zero_pad(value, width);
        return width;
    }
    return -1;
}

int handle_format(va_list ap, const char *format)
{
    int cnt = 0;

    switch (*format) {
        case 's':
            return my_putstr(va_arg(ap, char *));
        case 'i':
        case 'd':
            return my_put_nbr(va_arg(ap, int));
        case 'c':
            my_putchar((char)va_arg(ap, int));
            return 1;
        case '%':
            my_putchar('%');
        case '0':
            return handle_zero_padded_format(ap, format);
        case 'u':
            return my_u_flag(va_arg(ap, unsigned int));
        default:
            return write_format(ap, format);
    }
}

int write_format(va_list ap, const char *format)
{
    int cnt = 0;

    switch (*format) {
        case 'o':
            return my_o_flag(va_arg(ap, int));
        case 'n':
            return my_n_flag(va_arg(ap, int *));
        case 'x':
            return my_x_flag(va_arg(ap, int));
        case 'X':
            return my_capital_x_flag(va_arg(ap, int));
        case 'e':
            return my_e_flag(va_arg(ap, double));
        case 'E':
            return my_capital_e_flag(va_arg(ap, double));
        case 'f':
            return my_f_flag(va_arg(ap, double));
        default:
            return -1;
    }
}
