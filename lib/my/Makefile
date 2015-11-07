#
## Makefile for libmy in /home/boitea_r/c/rendu/Piscine_C_J08/lib/my/src
## 
## Made by Ronan Boiteau
## Login   <boitea_r@epitech.net>
## 
## Started on  Sat Oct 10 00:52:07 2015 Ronan Boiteau
## Last update Sat Nov  7 03:36:54 2015 Ronan Boiteau
##

INC	= my.h				\
	  my_macro.h

IDIR	= ../../include/

CC	= gcc
CFLAGS	+= -Wall -Werror -Wextra -ansi

RM	= rm -f

DIR	= ../
NAME	= libmy.a

SRCS	= match.c			\
	  my_char_isalpha.c		\
	  my_char_islower.c		\
	  my_char_isnum.c		\
	  my_char_isprintable.c		\
	  my_char_isupper.c		\
	  my_find_prime_sup.c		\
	  my_getnbr.c			\
	  my_is_prime.c			\
	  my_isneg.c			\
	  my_max_int_tab.c		\
	  my_min_int_tab.c		\
	  my_power_rec.c		\
	  my_put_nbr.c			\
	  my_put_nbr_fd.c		\
	  my_putchar.c			\
	  my_putchar_fd.c		\
	  my_putnbr_base.c		\
	  my_putstr.c			\
	  my_putstr_fd.c		\
	  my_revstr.c			\
	  my_showstr.c			\
	  my_sort_int_tab.c		\
	  my_square_root.c		\
	  my_str_isalpha.c		\
	  my_str_islower.c		\
	  my_str_isnum.c		\
	  my_str_isprintable.c		\
	  my_str_isupper.c		\
	  my_strcapitalize.c		\
	  my_strcat.c			\
	  my_strcmp.c			\
	  my_strcpy.c			\
	  my_strdup.c			\
	  my_strlen.c			\
	  my_strlowcase.c		\
	  my_strncat.c			\
	  my_strncmp.c			\
	  my_strncpy.c			\
	  my_strstr.c			\
	  my_strupcase.c		\
	  my_swap.c			\
	  nmatch.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	cp $(NAME) $(DIR)
	cp $(INC) $(IDIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all headers clean fclean re
