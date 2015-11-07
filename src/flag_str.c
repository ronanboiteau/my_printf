/*
** flag_str.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov  7 04:20:05 2015 Ronan Boiteau
** Last update Sat Nov  7 04:24:40 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_printf.h"

unsigned int	_print_str(unsigned int printed, ...)
{
  va_list	ap;

  va_start(ap, printed);
  printed += my_putstr(va_arg(ap, char *));
  va_end(ap);
  return (printed);
}

unsigned int	_str_non_printable(unsigned int printed, ...)
{
  unsigned int	idx;
  char		*str;
  va_list	ap;

  va_start(ap, printed);
  str = va_arg(ap, char *);
  idx = 0;
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
  va_end(ap);
  return (printed);
}
