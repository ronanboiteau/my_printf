/*
** my_printf_flags.h for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Nov 10 16:11:13 2015 Ronan Boiteau
** Last update Fri Nov 13 17:02:23 2015 Ronan Boiteau
*/

#ifndef MY_PRINTF_FLAGS_H_
# define MY_PRINTF_FLAGS_H_

# include <stdarg.h>

# define FLAGS_NBR (13)

typedef struct	s_flag
{
  char		flag_char;
  unsigned int	(*fct)(unsigned int printed, va_list ap);
}		t_flag;

unsigned int	_print_char(unsigned int printed, va_list ap);
unsigned int	_print_str(unsigned int printed, va_list ap);
unsigned int	_str_non_printable(unsigned int printed, va_list ap);
unsigned int	_print_int(unsigned int printed, va_list ap);
unsigned int	_convert_binary(unsigned int printed, va_list ap);
unsigned int	_convert_decimal(unsigned int printed, va_list ap);
unsigned int	_convert_hex_lowcase(unsigned int printed, va_list ap);
unsigned int	_convert_hex_upcase(unsigned int printed, va_list ap);
unsigned int	_convert_octal(unsigned int printed, va_list ap);
unsigned int	_ptr_to_hex(unsigned int printed, va_list ap);
unsigned int	_ptr_printed_chars(unsigned int printed, va_list ap);
unsigned int	_double_decimal(unsigned int printed, va_list ap);

#endif /* !MY_PRINTF_FLAGS_H_ */
