/*
** EPITECH PROJECT, 2023
** my_print_digits.c
** File description:
** none
*/

int my_print_digits(void)
{
    int i;
    char b;

    b = '\n';
    i = 48;
    for (i = 48; i <= 57; i++) {
        my_putchar(i);
    }
    my_putchar(b);
    return (0);
}
