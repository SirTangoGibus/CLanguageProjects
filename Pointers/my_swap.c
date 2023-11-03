/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** none
*/

void my_swap(int *a, int *b)
{
    int a2;
    int b2;

    a2 = *a;
    b2 = *b;
    *a = b2;
    *b = a2;
}
