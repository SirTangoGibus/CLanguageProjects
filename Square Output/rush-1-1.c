/*
** EPITECH PROJECT, 2023
** rush-1-1.c
** File description:
** none
*/

void horizontal(int x, int y)
{
    int i;

    for (i = 0; i <= x; i++) {
        if (i == 0 || i == x) {
                my_putchar(111);
        } else {
            my_putchar(45);
        }
    }
    my_putchar(10);
}

void vertical(int x, int y)
{
    int j;

    for (j = 0; j <= x; j++) {
        if (j == 0 || j == x) {
            my_putchar(124);
        } else {
            my_putchar(32);
        }
    }
    my_putchar(10);
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 14);
    } else {
    horizontal(x, y);
    for (int i = 0; i < y - 2; i++) {
        vertical(x, y);
    }
    horizontal(x, y);
    }
}
