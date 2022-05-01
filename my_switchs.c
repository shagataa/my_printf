/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-shagata.sri-chandan-das
** File description:
** my_switchs
*/

#include "include/my.h"

void cases_printf(char *str, int *i, va_list params)
{
    switch (str[*i]) {
    case '%': my_putchar('%'); *i++; break;
    case 'b': my_put_binary(va_arg(params, int)); *i++; break;
    case 'o': my_put_octal(va_arg(params, int)); *i++; break;
    case 'd': my_put_nbr(va_arg(params, int)); *i++; break;
    case 'i': my_put_nbr(va_arg(params, int)); *i++; break;
    case 'c': my_putchar(va_arg(params, int)); *i++; break;
    case 's': my_putstr(va_arg(params, char *)); *i++; break;
    case 'x': my_put_hex(va_arg(params, int)); *i++; break;
    case 'X': my_put_hex_upc(va_arg(params, int)); *i++; break;
    }
}
