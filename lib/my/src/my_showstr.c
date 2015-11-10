/*
** my_showstr.c for my_showstr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct 19 00:11:18 2015 Ronan Boiteau
** Last update Tue Nov 10 17:00:45 2015 Ronan Boiteau
*/

#include "my.h"

int		my_showstr(const char *str)
{
  unsigned int	idx;

  idx = 0;
  while (str[idx] != '\0')
    {
      if (my_char_isprintable(str[idx]))
	my_putchar(str[idx]);
      else
	{
	  my_putchar('\\');
	  if (str[idx] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[idx], "0123456789abcdef");
	}
      idx += 1;
    }
  return (0);
}
