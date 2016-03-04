/*
** put_nbrs.c for my_printf in /home/clemen_j/tek1/PSU_2015_my_printf/lib
** 
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
** 
** Started on  Sun Nov  8 01:25:37 2015 Cédric Clemenceau
** Last update Fri Nov 13 18:49:36 2015 Cédric Clemenceau
*/

#include "my.h"

int		my_put_nbr_binary(va_list ap)
{
  unsigned int		nb;

  nb = va_arg(ap, unsigned int);
  if (nb > 0)
    return (my_put_nbr_base(2, nb, "01"));
  else if (nb == 0)
      my_putchar('0');
  return (1);
}

int		my_put_nbr_octal(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  if (nb > 0)
    return (my_put_nbr_base(8, nb, "012345678"));
  else if (nb == 0)
    my_putchar('0');
  return (1);
}

int		my_put_nbr_hexam(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  if (nb > 0)
    return (my_put_nbr_base(16, nb, "0123456789abcdef"));
  else if (nb == 0)
    my_putchar('0');
  return (1);
}

int		my_put_nbr_hexa2(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  if (nb > 0)
    return (my_put_nbr_base(16, nb, "0123456789ABCDEF"));
  else if (nb == 0)
    my_putchar('0');
  return (1);
}

int	my_put_nbr_unsigned(unsigned int nb)
{
  int	count;

  count = 0;
  if (nb >= 10)
    count = my_put_nbr(nb / 10);
  my_putchar(nb % 10 + 48);
  return (count + 1);
}
