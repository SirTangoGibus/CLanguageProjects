/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** none
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n; i++) {
    dest[i] = src[i];
    }
    if (dest[n] > dest[i]) {
        dest[i] = "/0";
            }
    return dest;
}
