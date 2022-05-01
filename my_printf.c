/*
** EPITECH PROJECT, 2021
** B-PSU-100-PAR-1-1-myprintf-shagata.sri-chandan-das
** File description:
** my_printf
*/

#include "include/my.h"

void my_printf(char *str, ...)
{
    va_list params;

    va_start(params, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            cases_printf(str, &i, params);
        } else
            my_putchar(str[i]);
    }
    va_end(params);
}
