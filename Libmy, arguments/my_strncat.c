/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** none
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while (dest[a] != '\0') {
        a++;
    }
    while (src[b] != '\0' && b < nb) {
        dest[a + b] = src[b];
        b++;
    }
    dest[a + b] = '\0';
    return dest;
}
