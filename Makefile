##
## Makefile for my_printf in /home/clemen_j/rendu/Piscine_C_J10
##
## Made by Cédric Clemenceau
## Login   <clemen_j@epitech.net>
##
## Started on  Mon Oct 12 13:34:26 2015 Cédric Clemenceau
## Last update Mon Nov 16 10:44:03 2015 Cédric Clemenceau
##

RM	=	rm -f

CC	=	gcc

CD	=	cd

AR	=	ar rc

RN	=	ranlib

CFLAGS	=	-I./my/

SRC	=	lib/fonction_varg.c \
		lib/fct.c \
		lib/put_nbrs.c \
		lib/my_printf.c \
		lib/fct2.c \

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

$(NAME)	:	$(OBJ)
		$(AR) $(NAME) $(OBJ)
		$(RN) $(NAME)

all	:	$(NAME)
clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	: 	fclean all

.PHONY	: 	all clean fclean re
