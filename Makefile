##
## Makefile for my_printf in /home/boitea_r
## 
## Made by Ronan Boiteau
## Login   <boitea_r@epitech.net>
## 
## Started on  Tue Nov  3 16:47:00 2015 Ronan Boiteau
## Last update Thu Nov 12 18:17:40 2015 Ronan Boiteau
##

NAME	= my_printf

IDIR	= include/

LIB	= libmy.a
LNAME	= my
LDIR	= lib/my/

CC	= gcc
CFLAGS	+= -I $(IDIR)
CFLAGS	+= -O0

SRCS	= main.c

OBJS	= $(SRCS:.c=.o)

RM	= rm -f


all: $(LIB) $(NAME)

$(LIB):
	cd $(LDIR) && $(MAKE)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -L lib -l $(LNAME)

clean:
	$(RM) $(OBJS)
	cd $(LDIR) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd $(LDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
