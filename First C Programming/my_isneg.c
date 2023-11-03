/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** none
*/

int my_isneg(int n)
{
    char a;

    a = '\n';
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar(a);
    return (0);
}
