/*
** my_putstr.c for my_putstr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:22 2015 Ronan Boiteau
** Last update Sun Nov  8 02:25:33 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_putstr(const char *str)
{
  return (my_putstr_fd(1, str));
}
