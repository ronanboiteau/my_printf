/*
** my_putchar.c for my_putchar in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:09 2015 Ronan Boiteau
** Last update Thu Nov  5 12:27:39 2015 Ronan Boiteau
*/

#include "my.h"

int	my_putchar(char letter)
{
  my_putchar_fd(1, letter);
  return (1);
}
