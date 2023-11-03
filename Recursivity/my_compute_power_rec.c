/*
** EPITECH PROJECT, 2023
** my_compute_power_rec.c
** File description:
** none
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    result = nb * nb;
    if (p == 0){
        return 1;
    }
    if (p == 1){
        return nb;
    }
    if (p >= 1);
    return nb * my_compute_power_rec(nb, p -1);
    return result;
}
