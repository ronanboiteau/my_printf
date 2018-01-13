NAME	 = libmy.a

RM	 = rm -f

IDIR	= include/

CC	 = gcc
CFLAGS	+= -I $(IDIR)
CFLAGS	+= -Wall -Wextra
CFLAGS	+= -Wpedantic -Wno-long-long
CFLAGS	+= -Werror

PRINTF_DIR	= my_printf/
PRINTF_FILES	= compare_char.c	\
		  find_flag.c		\
		  flag_char.c		\
		  flag_int.c		\
		  flag_ptr.c		\
		  flag_str.c		\
		  flag_uint.c		\
		  init.c		\
		  my_printf.c		\
		  my_putchar.c		\
		  my_putnbr_base.c	\
		  my_put_nbr.c		\
		  my_putstr.c		\
		  my_showstr.c
PRINTF		= $(addprefix $(PRINTF_DIR), $(PRINTF_FILES))

SRCS_DIR	= src/
SRCS_FILES	= match.c				\
		  my_char_isprintable.c			\
		  my_find_prime_sup.c			\
		  my_is_prime.c				\
		  my_max_int_tab.c			\
		  my_min_int_tab.c			\
		  my_power.c				\
		  my_revstr.c				\
		  my_strcmp.c				\
		  my_strdup.c				\
		  my_strlen.c				\
		  my_strlowcase.c			\
		  my_strncat.c				\
		  my_strncmp.c				\
		  my_strncpy.c				\
		  my_strstr.c				\
		  my_strupcase.c			\
		  nmatch.c				\
		  $(PRINTF)
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS	 = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
