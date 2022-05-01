/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-myprintf-shagata.sri-chandan-das
** File description:
** my_put_hex
*/

#include "include/my.h"

void put_hex_next(int nb)
{
    if (nb <= 15 && nb >= 10) {
        if (nb = 10)
            write(1, "a", 1);
        if (nb = 11)
            write(1, "b", 1);
        if (nb = 12)
            write(1, "c", 1);
        if (nb = 13)
            write(1, "d", 1);
        if (nb = 14)
            write(1, "e", 1);
        if (nb = 15)
            write(1, "f", 1);
    } else
        my_put_nbr(nb % 16);
}

int my_put_hex(int nb)
{
    if (nb >= 16)
        my_put_hex(nb / 16);
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    put_hex_next(nb);
    return nb;
}

void put_hex_upc_next(int nb)
{
    if (nb <= 15 && nb >= 10) {
        if (nb = 10)
            write(1, "A", 1);
        if (nb = 11)
            write(1, "B", 1);
        if (nb = 12)
            write(1, "C", 1);
        if (nb = 13)
            write(1, "D", 1);
        if (nb = 14)
            write(1, "E", 1);
        if (nb = 15)
            write(1, "F", 1);
    } else
        my_put_nbr(nb % 16);
}

int my_put_hex_upc(int nb)
{
    if (nb >= 16)
        my_put_hex(nb / 16);
    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }
    put_hex_upc_next(nb);
    return nb;
}
