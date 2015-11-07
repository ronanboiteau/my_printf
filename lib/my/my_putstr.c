/*
** my_putstr.c for my_putstr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:22 2015 Ronan Boiteau
** Last update Thu Nov  5 17:32:58 2015 Ronan Boiteau
*/

#include "my.h"

int	my_putstr(char *str)
{
  return (my_putstr_fd(1, str));
}
