/*
** EPITECH PROJECT, 2023
** rush2
** File description:
** first step of rush 2
*/

#include "include/my.h"

int test(char str[], char c)
{
    int i = 0;
    int lettercount = 0;
    char lowerc;
    char  upperc;

    if (c >= 'A' && c <= 'Z'){
        upperc = c;
        lowerc = upperc + 32;
    }
    if (c >= 'a' && c <= 'z'){
        lowerc = c;
        upperc = lowerc - 32;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == lowerc || str[i] == upperc) {
            lettercount++;
    }
    }
    return lettercount;
}

int printletter(char c, int lettercount)
{
    my_putchar(c);
    my_putchar(':');
    my_put_nbr(lettercount);
    my_putchar('\n');
}

int loop(int argc, char *argv[])
{
    int i;
    int count;
    char c;

    for (i = 2; i < argc; i++) {
        c = argv[i][0];
        count = test(argv[1], c);
        printletter(c, count);
    }
}

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc < 3) {
        return 84;
    }  else {
        loop(argc, argv);
        return 0;
    }
}
