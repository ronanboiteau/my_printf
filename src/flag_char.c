/*
** flag_str.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 04:20:05 2015 Ronan Boiteau
** Last update Sat Nov  7 15:04:50 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_printf.h"

unsigned int	_print_char(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putchar(va_arg(ap, int));
  va_end(ap);
  return (printed);
}
