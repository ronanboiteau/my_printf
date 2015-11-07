/*
** my_isneg.c for my_isneg.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Sep 30 10:39:59 2015 Ronan Boiteau
** Last update Thu Oct 15 15:57:04 2015 Ronan Boiteau
*/

#include "my.h"

void	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return ;
}
