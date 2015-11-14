/*
** my_putnbr_base.c for my_putnbr_base in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct 19 00:17:18 2015 Ronan Boiteau
** Last update Thu Nov 12 12:39:42 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_putnbr_base(unsigned int nbr, const char *base)
{
  unsigned int	base_int;
  unsigned int	printed;

  printed = 0;
  base_int = 0;
  while (base[base_int] != '\0')
    base_int = base_int + 1;
  if (base_int < 2)
    return (0);
  if (nbr >= base_int)
    printed += my_putnbr_base(nbr / base_int, base);
  printed += my_putchar(base[nbr % base_int]);
  return (printed);
}

unsigned	my_putnbr_base_ull(unsigned long long nbr, const char *base)
{
  unsigned int	base_int;
  unsigned int	printed;

  printed = 0;
  base_int = 0;
  while (base[base_int] != '\0')
    base_int = base_int + 1;
  if (base_int < 2)
    return (0);
  if (nbr >= base_int)
    printed += my_putnbr_base_ull(nbr / base_int, base);
  printed += my_putchar(base[nbr % base_int]);
  return (printed);
}
