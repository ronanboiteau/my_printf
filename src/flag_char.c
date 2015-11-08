/*
** flag_char.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 18:05:08 2015 Ronan Boiteau
** Last update Sun Nov  8 02:44:36 2015 Ronan Boiteau
*/

#include "my.h"
#include "variadic.h"

unsigned int	_print_char(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putchar(va_arg(ap, int));
  va_end(ap);
  return (printed);
}
