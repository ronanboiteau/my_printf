/*
** my_is_prime.c for my_is_prime in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:25:12 2015 Ronan Boiteau
** Last update Sun Nov  8 02:07:58 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_is_prime(int nbr)
{
  int		idx;

  if (nbr <= 1)
    return (FALSE);
  idx = 2;
  while (idx < nbr)
    {
      if (nbr % idx == 0)
	return (FALSE);
      idx += 1;
    }
  return (TRUE);
}
