/*
** my_find_prime_sup.c for my_find_prime_sup in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:50:14 2015 Ronan Boiteau
** Last update Sun Nov  8 01:39:19 2015 Ronan Boiteau
*/

#include "my.h"

int		my_find_prime_sup(int nbr)
{
  while (my_is_prime(nbr) != 1)
    nbr += 1;
  return (nbr);
}
