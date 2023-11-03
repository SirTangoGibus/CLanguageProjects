/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** none
*/

char *my_strcat(char *dest, char const *src)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while (dest[a] != '\0') {
        a++;
    }
    while (src[b] != '\0') {
        dest[a + b] = src[b];
        b++;
    }
    dest[a + b] = '\0';
    return dest;
}
