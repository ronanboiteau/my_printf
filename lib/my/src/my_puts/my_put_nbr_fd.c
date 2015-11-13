/*
** my_put_nbr_fd.c for my_put_nbr_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:50:12 2015 Ronan Boiteau
** Last update Thu Nov 12 23:57:00 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_put_nbr_fd(int fd, int nbr)
{
  unsigned int	printed;

  printed = 0;
  if (nbr == -2147483648)
    {
      printed += my_putstr_fd(fd, "-2147483648");
      return (11);
    }
  if (nbr < 0)
    {
      my_putchar_fd(fd, '-');
      printed++;
      nbr = nbr * -1;
    }
  if (nbr >= 10)
    {
      printed += my_put_nbr_fd(fd, nbr / 10);
      my_putchar_fd(fd, nbr % 10 + '0');
      printed++;
    }
  else
    printed += my_putchar_fd(fd, nbr + '0');
  return (printed);
}
