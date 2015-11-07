/*
** my_put_nbr.c for my_put_nbr.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:53 2015 Ronan Boiteau
** Last update Sat Nov  7 14:43:50 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_put_nbr(int nbr)
{
  return (my_put_nbr_fd(1, nbr));
}
