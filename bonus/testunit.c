/*
** testunit.c for my_printf in /home/clemen_j/tek1/PSU_2015_my_printf
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Mon Nov 16 09:27:16 2015 Cédric Clemenceau
** Last update Mon Nov 16 10:33:19 2015 Cédric Clemenceau
*/

#include <stdlib.h>

int	main()
{
  char	realy[5];

  realy[0] = 't';
  realy[1] = 43;
  realy[2] = 't';
  realy[3] = 'i';
  my_printf("_____________CHAR____________\n");
  my_printf("_test_1_%c\n", 'F');
  my_printf("_test_2_%     c\n", 'R');
  my_printf("_test_3_%c\n", -2147483648);
  my_printf("_test_4_%      c\n");
  my_printf("_test_5_%    /=   c\n", 'l');
  my_printf("_____________INT(d)____________\n");
  my_printf("_test_6_%d\n", -2147483648);
  my_printf("_test_7_%       d\n", 2147483648);
  my_printf("_test_8_%	  /=   d\n", 42);
  my_printf("_test_9_%d\n");
  my_printf("_____________string____________\n");
  my_printf("_test_10_%s\n", "printf(%s, yop)");
  my_printf("_test_11_%s\n", "21341");
  my_printf("_test_12_%    s\n");
  my_printf("_test_13_%s\n", NULL);
  my_printf("_test_14_%   /=   s\n", "coucou");
  my_printf("_____________INT(i)____________\n");
  my_printf("_test_15_%i\n", 2147483647);
  my_printf("_test_16_%        i\n", realy);
  my_printf("_test_17_%   /=   i\n", 42);
  my_printf("_____________OCT____________\n");
  my_printf("_test_18_%o\n", 42);
  my_printf("_test_19_%     o\n",20134521);
  my_printf("_test_20_%   /=   o\n", 42);
  my_printf("_____________BINARY____________\n");
  my_printf("_test_21_%b\n", 42);
  my_printf("_test_22_%   /=   b\n", 42);
  my_printf("_test_23_%    b\n", 201342344);
  my_printf("_test_24_%b\n", "coucou");
  my_printf("_test_25_%b\n");
  my_printf("_____________hexa____________\n");
  my_printf("_test_28_%x\n", 42);
  my_printf("_test_29_%   /=   x\n", 42);
  my_printf("_test_30_%    x\n", 201342344);
  my_printf("_test_31_%x\n", "coucou");
  my_printf("_test_32_%x\n");
  my_printf("_____________HEXA____________\n");
  my_printf("_test_33_%X\n", 42);
  my_printf("_test_34_%   /=   X\n", 42);
  my_printf("_test_35_%    X\n", 201342344);
  my_printf("_test_36_%X\n", "coucou");
  my_printf("_test_37_%X\n");
  my_printf("_____________UNSIGNED____________\n");
  my_printf("_test_38_%u\n", 42);
  my_printf("_test_39_%   /=   u\n", 42);
  my_printf("_test_40_%    u\n", 3201342344);
  my_printf("_test_41_%u\n", "coucou");
  my_printf("_test_42_%u\n");
  my_printf("_____________%%____________\n");
  my_printf("_test_43%%\n");
  my_printf("_test_44%%\n", 32);
  my_printf("_____________POINTEUR____________\n");
  my_printf("_test_45%p\n", &realy);
  my_printf("_test_46%        p\n", &realy);
  my_printf("_test_47%    /=   p\n", &realy);
  my_printf("_test_48%p\n", NULL);
  my_printf("_____________STRING____________\n");
  my_printf("_test_49_%S\n", "printf(%s, yop)");
  my_printf("_test_50_%S\n", "21341");
  my_printf("_test_51_%    S\n");
  my_printf("_test_52_%S\n", NULL);
  my_printf("_test_53_%   /=   S\n", "coucou");
  my_printf("_test_53_%S\n", realy);
  return (0);
}
