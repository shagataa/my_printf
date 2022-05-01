/*
** EPITECH PROJECT, 2021
** include
** File description:
** my lib
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MY_H_
    #define MY_H_

void cases_printf(char *str, int *i, va_list params);
int my_put_binary(int nb);
int my_put_octal(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_hex_upc(int nb);
void put_hex_upc_next(int nb);
int my_put_hex(int nb);
void put_hex_next(int nb);

#endif /* !MY_H_ */
