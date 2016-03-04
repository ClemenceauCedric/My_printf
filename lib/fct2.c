/*
** fct2.c for my_printf in /home/clemen_j/tek1/PSU_2015_my_printf/lib
** 
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
** 
** Started on  Tue Nov 10 16:49:38 2015 Cédric Clemenceau
** Last update Fri Nov 13 18:04:42 2015 Cédric Clemenceau
*/

#include "my.h"

int			my_pointeur(va_list ap)
{
  unsigned long int	nb;
  unsigned long int	p;

  p = va_arg(ap, unsigned long int);
  nb = p;
  if (p == 0)
    {
      my_putstr("(nil)");
      return (5);
    }
  else
    {
      my_putstr("0x");
      return (my_put_nbr_unsigned_hexa(nb) + 2);
    }
}

int	my_put_nbr_unsigned_hexa(unsigned long int nb)
{
  return (my_put_nbr_base(16, nb, "0123456789abcdef"));
}

int	my_put_majs(va_list ap)
{
  unsigned char	*s;
  int	i;

  i = 0;
  s = va_arg(ap, unsigned char *);
  if (s == NULL)
    my_putstr("(null)");
  else
    while (s[i] != 0)
      {
	if (s[i] >= 32 && s[i] < 127)
	  my_putchar(s[i]);
	else
	  {
	    my_putchar('\\');
	    if (s[i] < 8)
	      my_putstr("00");
	    else if (s[i] < 32 && s[i] >= 8)
	      fct_putchar(s, i);
	    my_put_nbr_base(8, s[i], "01234567");
	  }
	i++;
      }
  return (i);
}

void	fct_putchar(unsigned char *s, int i)
{
  my_putchar('0');
  my_putchar(s[i]);
}
