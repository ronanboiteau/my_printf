/*
** flag_str.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 04:20:05 2015 Ronan Boiteau
** Last update Fri Nov 13 20:29:11 2015 Ronan Boiteau
*/

#include "my.h"
#include "variadic.h"

unsigned int	_print_str(unsigned int printed, va_list ap)
{
  printed += my_putstr(va_arg(ap, const char *));
  return (printed);
}

unsigned int	_str_non_printable(unsigned int printed, va_list ap)
{
  unsigned int	idx;
  char		*str;

  str = va_arg(ap, char *);
  idx = 0;
  if (str == NULL)
    return (printed + my_putstr("(null)"));
  while (str[idx] != '\0')
    {
      if (my_char_isprintable(str[idx]))
	printed += my_putchar(str[idx]);
      else
	{
	  printed += my_putchar('\\');
	  if (str[idx] < 64)
	    printed += my_putchar('0');
	  if (str[idx] < 8)
	    printed += my_putchar('0');
	  printed += my_putnbr_base(str[idx], "01234567");
	}
      idx = idx + 1;
    }
  return (printed);
}
