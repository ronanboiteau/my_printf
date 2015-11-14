/*
** my_putnbr_double.c for my_putnbr_double.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Fri Nov 13 22:12:45 2015 Ronan Boiteau
** Last update Sat Nov 14 07:59:48 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"

unsigned int	my_putnbr_double(double nbr)
{
  return (my_putnbr_double_fd(1, nbr));
}
