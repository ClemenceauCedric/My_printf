##
## Makefile for my_printf in /home/clemen_j/rendu/Piscine_C_J10
##
## Made by Cédric Clemenceau
## Login   <clemen_j@epitech.net>
##
## Started on  Mon Oct 12 13:34:26 2015 Cédric Clemenceau
## Last update Mon Nov 16 10:41:19 2015 Cédric Clemenceau
##

RM	=	rm -f

CC	=	gcc

LDFLAGS	=	-L../ -lmy
CFLAGS	=	-I../my/

DIR	=	lib/

SRC	=	testunit.c

NAME	=	bonus

OBJ	=	$(SRC:.c=.o)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

all	:	$(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	: 	fclean all

.PHONY	: 	all clean fclean re
