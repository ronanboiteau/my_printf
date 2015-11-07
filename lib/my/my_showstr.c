/*
** my_showstr.c for my_showstr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct 19 00:11:18 2015 Ronan Boiteau
** Last update Thu Nov  5 21:58:10 2015 Ronan Boiteau
*/

#include "my.h"

int	my_showstr(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (my_char_isprintable(str[index]))
	my_putchar(str[index]);
      else
	{
	  my_putchar('\\');
	  if (str[index] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[index], "0123456789abcdef");
	}
      index = index + 1;
    }
  return (0);
}