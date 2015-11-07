/*
** my_printf.h for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Nov  4 14:00:37 2015 Ronan Boiteau
** Last update Sat Nov  7 04:23:24 2015 Ronan Boiteau
*/

#ifndef MY_PRINTF_
# define MY_PRINTF_

# include <stdarg.h>

# define FLAGS_NBR (5)

typedef struct	s_fct_tab
{
  char		*flags;
  unsigned int	idx;
  unsigned int	(*fct_tab[FLAGS_NBR])(unsigned int, ...);
}		t_fct_tab;

typedef struct	s_string
{
  char		*str;
  unsigned int	idx;
}		t_string;

unsigned int	_binary_base(unsigned int printed, ...);
unsigned int	_print_int(unsigned int printed, ...);
unsigned int	_print_str(unsigned int printed, ...);
unsigned int	_str_non_printable(unsigned int printed, ...);

#endif /* !MY_PRINTF_ */
