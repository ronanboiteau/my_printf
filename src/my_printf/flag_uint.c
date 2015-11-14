/*
** flag_uint.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 14:34:41 2015 Ronan Boiteau
** Last update Fri Nov 13 20:21:43 2015 Ronan Boiteau
*/

#include "my.h"
#include "variadic.h"

unsigned int	_convert_binary(unsigned int printed, va_list ap)
{
  printed += my_putnbr_base(va_arg(ap, unsigned int), "01");
  return (printed);
}

unsigned int	_convert_decimal(unsigned int printed, va_list ap)
{
  printed += my_putnbr_base(va_arg(ap, unsigned int), "0123456789");
  return (printed);
}

unsigned int	_convert_hex_lowcase(unsigned int printed, va_list ap)
{
  printed += my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
  return (printed);
}

unsigned int	_convert_hex_upcase(unsigned int printed, va_list ap)
{
  printed += my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
  return (printed);
}

unsigned int	_convert_octal(unsigned int printed, va_list ap)
{
  printed += my_putnbr_base(va_arg(ap, unsigned int), "01234567");
  return (printed);
}
