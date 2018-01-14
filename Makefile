NAME	 = libmy.a

RM	 = rm -f

IDIR	= include/

CC	 = gcc
CFLAGS	+= -I $(IDIR)
CFLAGS	+= -Wall -Wextra
CFLAGS	+= -Wpedantic -Wno-long-long
CFLAGS	+= -Werror

SRCS_DIR	= src/
SRCS_FILES	= compare_char.c		\
		  find_flag.c			\
		  flag_char.c			\
		  flag_int.c			\
		  flag_ptr.c			\
		  flag_str.c			\
		  flag_uint.c			\
		  init.c			\
		  my_char_isprintable.c		\
		  my_printf.c			\
		  my_putchar.c			\
		  my_putnbr_base.c		\
		  my_put_nbr.c			\
		  my_putstr.c			\
		  my_showstr.c			\
		  my_strlen.c
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS		 = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
