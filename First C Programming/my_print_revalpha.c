/*
** EPITECH PROJECT, 2023
** my_print_revalpha.c
** File description:
** Write a function that beginning with z, displays the lowercase alphabet
** in descending order, on a single line
*/

int my_print_revalpha(void)
{
    char c;
    char b;

    b = '\n';
    c = 'z';
    for (c = 'z'; c >= 'a'; c--) {
        my_putchar(c);
    }
    my_putchar(b);
    return (0);
}
