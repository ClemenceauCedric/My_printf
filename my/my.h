/*
** my.h for my_printf in /home/clemen_j/tek1/PSU_2015_my_printf
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Fri Nov  6 22:22:53 2015 Cédric Clemenceau
** Last update Mon Nov 16 09:26:34 2015 Cédric Clemenceau
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef __MY__
# define __MY__

int	negativ(int nb);
int	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_space(va_list);
int	my_pointeur(va_list);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_pourcent(va_list);
int	my_put_majs(va_list);
int	my_putstr_varg(va_list);
int	my_putchar_varg(va_list);
int	my_put_nbr_varg(va_list);
int	my_put_nbr_octal(va_list);
int	my_put_nbr_hexam(va_list);
int	my_put_nbr_hexa2(va_list);
int	my_put_nbr_binary(va_list);
int	my_put_nbr_unsigned_varg(va_list);
int	my_printf(const char *format, ...);
int	my_put_nbr_unsigned(unsigned int nb);
void	fct_putchar(unsigned char *s, int i);
int	my_put_nbr_unsigned_hexa(unsigned long int nb);
int	my_put_nbr_base(int base, unsigned long int nb, char *s);

#endif /* __MY__ */
