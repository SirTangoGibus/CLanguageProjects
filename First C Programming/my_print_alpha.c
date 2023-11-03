/*
** EPITECH PROJECT, 2023
** my_print_alpha.c
** File description:
** none
*/

int my_print_alpha(void)
{
    char c;
    char b;

    b = '\n';
    c = 'a';
    for (c = 'a'; c <= 'z'; c++) {
        my_putchar(c);
    }
    my_putchar(b);
    return (0);
}
