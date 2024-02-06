/*
** EPITECH PROJECT, 2023
** Main Header
** File description:
** Lib principale
*/

#include <stdarg.h>


#ifndef MY_H_
    #define MY_H_

int my_putnbr_float(double number_put);
int my_putnbr_octal(unsigned int nb);
int my_putnbr_hex(unsigned int nb);
int my_putnbr_bighex(unsigned int nb);
int my_putnbr_u(unsigned int nb);
int my_putchar(char c);
int my_put_nbr(int number_put);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
int my_putstr_error(char const *str);
int handle_flags_and_space(va_list ap, int *i, const char *format, int *count);
int check_flags(va_list ap, int *i, char c, int *counter);
int my_strcmp(const char *string_1, const char *string_2);
char *my_strcpy(char *copy_str, char const *src);
char *my_strdup(char const *src);
int mini_printf(const char *format, ...);
void args_null(char **args);
#endif
