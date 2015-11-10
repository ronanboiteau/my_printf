/*
** flag_ptr.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 18:02:00 2015 Ronan Boiteau
** Last update Tue Nov 10 15:21:27 2015 Ronan Boiteau
*/

#include "my.h"
#include "variadic.h"

unsigned int	_ptr_to_hex(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putstr("0x");
  printed += my_putnbr_base_ull(va_arg(ap, unsigned long long),
				"0123456789abcdef");
  va_end(ap);
  return (printed);
}

unsigned int	_ptr_printed_chars(unsigned int printed, ...)
{
  va_list	ap;
  int		*ptr;

  va_start(ap, printed);
  ptr = va_arg(ap, int *);
  *ptr = printed;
  va_end(ap);
  return (printed);
}
