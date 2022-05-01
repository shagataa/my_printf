/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-shagata.sri-chandan-das
** File description:
** functions
*/

#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10)
        my_putchar(nb % 10 + '0');
    return (nb);
}

int my_put_octal(int nb)
{
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 8)
        my_put_octal(nb / 8);
    my_put_nbr(nb % 8);
    return nb;
}

int my_put_binary(int nb)
{
    if (nb >= 2) {
        my_put_binary(nb / 2);
        my_putchar(nb % 2 + '0');
    }
    if (nb >= 0 && nb <= 1) {
        if (nb = 0)
            write(1, "0", 1);
        if (nb = 1)
            write(1, "1", 1);
    }
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    return nb;
}
