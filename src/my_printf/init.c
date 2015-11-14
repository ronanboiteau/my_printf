/*
** init.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov 14 08:25:02 2015 Ronan Boiteau
** Last update Sat Nov 14 08:28:02 2015 Ronan Boiteau
*/

#include "my_printf_flags.h"
#include "variadic.h"

int			_init_flag(char flag_char,
				   unsigned int (*fct)(unsigned int, va_list),
				   t_flag *flags)
{
  flags->flag_char = flag_char;
  flags->fct = fct;
  return (0);
}

void			_init_structures(t_flag *flags,
					  t_string *str,
					  const char *format)
{
  str->str = format;
  str->idx = 0;
  _init_flag('c', &_print_char, &flags[0]);
  _init_flag('n', &_ptr_printed_chars, &flags[1]);
  _init_flag('S', &_str_non_printable, &flags[2]);
  _init_flag('i', &_print_int, &flags[3]);
  _init_flag('d', &_print_int, &flags[4]);
  _init_flag('b', &_convert_binary, &flags[5]);
  _init_flag('s', &_print_str, &flags[6]);
  _init_flag('x', &_convert_hex_lowcase, &flags[7]);
  _init_flag('X', &_convert_hex_upcase, &flags[8]);
  _init_flag('o', &_convert_octal, &flags[9]);
  _init_flag('u', &_convert_decimal, &flags[10]);
  _init_flag('p', &_ptr_to_hex, &flags[11]);
  _init_flag('f', &_double_decimal, &flags[12]);
}
