/*
** EPITECH PROJECT, 2023
** my_compute_factorial_it.c
** File description:
** none
*/

int my_compute_factorial_it(int nb)
{
    int i;
    int result = 1;

    if (nb < 0 || nb >= 13) {
        return 0;
    }
    for (int i = 2; i <= nb; i++) {
        result = result * i;
    }
    return result;
}
