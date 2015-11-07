/*
** my_putnbr_base.c for my_putnbr_base in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct 19 00:17:18 2015 Ronan Boiteau
** Last update Thu Nov  5 22:03:03 2015 Ronan Boiteau
*/

#include "my.h"

int	my_putnbr_base(int nbr, char *base)
{
  int	base_int;
  int	printed;

  printed = 0;
  base_int = 0;
  while (base[base_int] != '\0')
    base_int = base_int + 1;
  if (base_int < 2)
    return (0);
  if (nbr == -2147483648)
    {
      printed += my_putnbr_base(-2147483648 / base_int, base);
      printed += my_putnbr_base(-2147483648 % base_int, base);
      return (printed);
    }
  if (nbr < 0)
    {
      nbr = nbr * -1;
      printed += my_putchar('-');
    }
  if (nbr >= base_int)
    printed += my_putnbr_base(nbr / base_int, base);
  printed += my_putchar(base[nbr % base_int]);
  return (printed);
}
