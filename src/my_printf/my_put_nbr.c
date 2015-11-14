/*
** my_put_nbr.c for my_put_nbr.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:53 2015 Ronan Boiteau
** Last update Sat Nov 14 07:52:53 2015 Ronan Boiteau
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
      printed += 1;
      nbr = nbr * -1;
    }
  if (nbr >= 10)
    {
      printed += my_put_nbr_fd(fd, nbr / 10);
      my_putchar_fd(fd, nbr % 10 + '0');
      printed += 1;
    }
  else
    printed += my_putchar_fd(fd, nbr + '0');
  return (printed);
}

unsigned int	my_put_nbr(int nbr)
{
  return (my_put_nbr_fd(1, nbr));
}

unsigned int	my_putnbr_printf(int nbr)
{
  unsigned int	printed;

  printed = 0;
  if (nbr == -2147483648)
    {
      printed += my_putstr("-2147483648");
      return (printed);
    }
  if (nbr < 0)
    {
      printed += my_putchar('-');
      nbr = nbr * -1;
    }
  printed += my_put_nbr(nbr);
  return (printed);
}
