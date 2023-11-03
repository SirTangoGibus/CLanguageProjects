/*
** EPITECH PROJECT, 2023
** headerfiles.h
** File description:
** Our header files in one place
*/

#ifndef HEADERFILES_H
    #define HEADERFILES_H
    #include <stdarg.h>
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int handle_zero_padded_format(va_list ap, const char *format);
int write_format(va_list ap, const char *format);
void my_zero_pad(int value, int width);
int handle_format(va_list ap, const char *format);
int my_printf(const char *format, ...);
int my_u_flag(unsigned int nb);
int my_o_flag(int nb);
int my_n_flag(int *count);
int my_x_flag(int nb);
int my_capital_x_flag(int nb);
int my_e_flag(double nb);
int my_capital_e_flag(double nb);
int handle_string(va_list ap);
int handle_integer(va_list ap);
int handle_char(va_list ap);
int handle_percent(void);
int handle_u(va_list ap);
int handle_o(va_list ap);
int handle_n(va_list ap, int cnt);
int handle_x(va_list ap);
int handle_xup(va_list ap);
int my_put_float(double nb);
int my_f_flag(double nb);
#endif
