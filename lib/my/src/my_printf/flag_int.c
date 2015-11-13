/*
** flag_int.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 04:20:32 2015 Ronan Boiteau
** Last update Thu Nov 12 20:20:01 2015 Ronan Boiteau
*/

#include "my.h"
#include "variadic.h"

unsigned int	_print_int(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_put_nbr(va_arg(ap, int));
  va_end(ap);
  return (printed);
}
