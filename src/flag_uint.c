/*
** flag_uint.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 14:34:41 2015 Ronan Boiteau
** Last update Sat Nov  7 14:56:02 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_printf.h"

unsigned int	_convert_binary(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putnbr_base(va_arg(ap, unsigned int), "01");
  va_end(ap);
  return (printed);
}

unsigned int	_convert_decimal(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putnbr_base(va_arg(ap, unsigned int), "0123456789");
  va_end(ap);
  return (printed);
}

unsigned int	_convert_hex_lowcase(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  va_end(ap);
  return (printed);
}

unsigned int	_convert_hex_upcase(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
  va_end(ap);
  return (printed);
}

unsigned int	_convert_octal(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putnbr_base(va_arg(ap, unsigned int), "01234567");
  va_end(ap);
  return (printed);
}
