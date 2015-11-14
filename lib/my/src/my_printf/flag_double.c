/*
** flag_double.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Nov 12 23:25:26 2015 Ronan Boiteau
** Last update Fri Nov 13 22:24:12 2015 Ronan Boiteau
*/

#include "my.h"
#include "variadic.h"

unsigned int	_double_decimal(unsigned int printed, va_list ap)
{
  printed += my_putnbr_double(va_arg(ap, double));
  return (printed);
}
