/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** none
*/

#include <stdlib.h>
#include "include/bandage.h"

char *my_strdup(char const *src)
{
    int i;
    char *str;
    int j;

    j = my_strlen(src);
    str = malloc(sizeof(char) * j + 1);
    for (i = 0; src[i] != '\0'; i++) {
        str[i] = src[i];
    }
    str[i] = '\0';
    return str;
}
