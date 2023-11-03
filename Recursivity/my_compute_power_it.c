/*
** EPITECH PROJECT, 2023
** my_compute_power_it.c
** File description:
** none
*/

int my_compute_power_it(int nb, int p)
{
    int i;
    int result;

    result = nb * nb;
    for (i = 1; i < p; i++){
        result *= nb;
    }
    return result;
}
