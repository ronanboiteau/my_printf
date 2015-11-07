/*
** my_find_prime_sup.c for my_find_prime_sup in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:50:14 2015 Ronan Boiteau
** Last update Sun Oct 18 18:54:45 2015 Ronan Boiteau
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
  while (my_is_prime(nb) != 1)
    nb = nb + 1;
  return (nb);
}
