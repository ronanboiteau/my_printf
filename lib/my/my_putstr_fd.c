/*
** my_putstr_fd.c for my_putstr_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:52:56 2015 Ronan Boiteau
** Last update Thu Nov  5 12:19:55 2015 Ronan Boiteau
*/

#include "my.h"

int	my_putstr_fd(int fd, char *str)
{
  write(fd, str, my_strlen(str));
  return (my_strlen(str));
}
