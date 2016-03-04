/*
** fonction.c for my_printf in /home/clemen_j/rendu/Piscine_C_J03
** 
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
** 
** Started on  Thu Oct 15 13:59:48 2015 Cédric Clemenceau
** Last update Fri Nov 13 18:46:53 2015 Cédric Clemenceau
*/

#include "my.h"

int	my_put_nbr_varg(va_list ap)
{
  int	nb;

  nb = va_arg(ap, int);
  return (my_put_nbr(nb));
}

int		my_put_nbr_unsigned_varg(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  return (my_put_nbr_unsigned(nb));
}

int	my_putchar_varg(va_list ap)
{
  char	c;

  c = (char) va_arg(ap, int);
  write(1, &c, 1);
  return (1);
}

int	my_putstr_varg(va_list ap)
{
  int	i;
  char	*va;

  va = va_arg(ap, char *);
  i = 0;
  if (va == NULL)
    {
    my_putstr("(null)");
    return (6);
    }
  else
    while (va[i])
      {
	my_putchar(va[i]);
	i++;
      }
  return (i);
}

int	my_pourcent(va_list ap)
{
  (void) ap;
  my_putchar('%');
  return (1);
}
