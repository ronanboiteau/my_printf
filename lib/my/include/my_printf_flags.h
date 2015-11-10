/*
** my_printf_flags.h for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Nov 10 16:11:13 2015 Ronan Boiteau
** Last update Tue Nov 10 16:11:13 2015 Ronan Boiteau
*/

#ifndef MY_PRINTF_FLAGS_H_
# define MY_PRINTF_FLAGS_H_

# include <stdarg.h>
# define FLAGS_NBR (12)

typedef struct	s_fct_tab
{
  char		*flags;
  unsigned int	idx;
  unsigned int	(*fct_tab[FLAGS_NBR])(unsigned int, ...);
}		t_fct_tab;

unsigned int	_print_char(unsigned int printed, ...);
unsigned int	_print_str(unsigned int printed, ...);
unsigned int	_str_non_printable(unsigned int printed, ...);
unsigned int	_print_int(unsigned int printed, ...);
unsigned int	_convert_binary(unsigned int printed, ...);
unsigned int	_convert_decimal(unsigned int printed, ...);
unsigned int	_convert_hex_lowcase(unsigned int printed, ...);
unsigned int	_convert_hex_upcase(unsigned int printed, ...);
unsigned int	_convert_octal(unsigned int printed, ...);
unsigned int	_ptr_to_hex(unsigned int printed, ...);
unsigned int	_ptr_printed_chars(unsigned int printed, ...);

#endif /* !MY_PRINTF_FLAGS_H_ */
