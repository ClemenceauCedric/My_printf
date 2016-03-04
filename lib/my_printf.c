/*
** my_printf.c for my_printf in /home/clemen_j/teck1/PSU_2015_my_printf
** 
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
** 
** Started on  Wed Nov  4 18:37:56 2015 Cédric Clemenceau
** Last update Fri Nov 13 19:04:42 2015 Cédric Clemenceau
*/

#include "my.h"

void	putcharpourcent(char format)
{
  my_putchar('%');
  my_putchar(format);
}

int	pointeur(char format, va_list ap, int i)
{
  int	(*ptr[12])(va_list);
  char	*s;

  s = "csdiobxXu%pS";
  ptr[0] = &my_putchar_varg;
  ptr[1] = &my_putstr_varg;
  ptr[2] = &my_put_nbr_varg;
  ptr[3] = &my_put_nbr_varg;
  ptr[4] = &my_put_nbr_octal;
  ptr[5] = &my_put_nbr_binary;
  ptr[6] = &my_put_nbr_hexam;
  ptr[7] = &my_put_nbr_hexa2;
  ptr[8] = &my_put_nbr_unsigned_varg;
  ptr[9] = &my_pourcent;
  ptr[10] = &my_pointeur;
  ptr[11] = &my_put_majs;
  while (format != s[i] && s[i] != 0)
    i++;
  if (s[i] == 0)
    {
      putcharpourcent(format);
      return (2);
    }
  else
    return (ptr[i](ap));
}

void	space(int *i, int *count, const char *format)
{
  if (format[*i] == '%' && format[*i + 1] == ' ')
    {
      my_putchar(' ');
      *count += 1;
    }
  ++*i;
}

int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		i;
  int		j;
  int		count;

  count = 0;
  j = 0;
  i = 0;
  va_start(ap, format);
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  while (format[i + 1] == ' ')
	    space(&i, &count, format);
	  count += pointeur(format[++i], ap, j);
	}
      else
	count += my_putchar(format[i]);
      format++;
    }
  va_end(ap);
  return (count);
}
