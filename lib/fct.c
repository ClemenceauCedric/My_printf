/*
** fct.c for my_printf in /home/clemen_j/tek1/PSU_2015_my_printf/lib
** 
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
** 
** Started on  Sat Nov  7 19:18:30 2015 Cédric Clemenceau
** Last update Fri Nov 13 18:51:59 2015 Cédric Clemenceau
*/

#include "my.h"

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}

int	my_putstr(char *str)
{
  return (write(1, str, my_strlen(str)));
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	my_put_nbr(int nb)
{
  int	i;

  i = 1;
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
      return (10);
    }
  else if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      i += my_put_nbr(nb / 10);
      my_putchar(nb % 10 + '0');
      return (i + 1);
    }
  else if (nb >= 10)
    i += my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (i);
}

int	my_put_nbr_base(int base, unsigned long int nb, char *s)
{
  int	i;

  i = 1;
  if (nb >= (unsigned long int) base)
    i += my_put_nbr_base(base, nb / base, s);
  my_putchar(s[nb % base]);
  return (i);
}
