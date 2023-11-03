/*
** EPITECH PROJECT, 2023
** sum_numbers.c
** File description:
** none
*/

#include <stdarg.h>
#include "includes/my.h"

int sum_numbers(int n, ...)
{
    int i;
    int sum;
    va_list ap;

    sum = 0;
    va_start(ap, n);
    for (i = 0; i < n; i++) {
        sum = sum + va_arg(ap, int);
    }
    va_end(ap);
    return sum;
}
