/*
** my_putchar.c for my_putchar in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 09:33:09 2015 Ronan Boiteau
** Last update Fri Nov 13 22:08:06 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_putchar_fd(int fd, char letter)
{
  write(fd, &letter, 1);
  return (1);
}

unsigned int	my_putchar(char letter)
{
  my_putchar_fd(1, letter);
  return (1);
}
