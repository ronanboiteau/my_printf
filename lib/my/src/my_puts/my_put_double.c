/*
** my_put_double.c for my_put_double in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Fri Nov 13 01:14:38 2015 Ronan Boiteau
** Last update Fri Nov 13 01:15:04 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_put_double(double nbr)
{
  return (my_put_double_fd(1, nbr));
}

