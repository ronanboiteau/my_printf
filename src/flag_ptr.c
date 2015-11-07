/*
** flag_ptr.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 18:02:00 2015 Ronan Boiteau
** Last update Sat Nov  7 19:02:32 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_printf.h"

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
