/*
** my_putchar.c for my_putchar in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:09 2015 Ronan Boiteau
** Last update Sat Nov  7 14:44:15 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_putchar(char letter)
{
  my_putchar_fd(1, letter);
  return (1);
}
