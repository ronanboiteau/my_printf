/*
** my_putstr_fd.c for my_putstr_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:52:56 2015 Ronan Boiteau
** Last update Sun Nov  8 02:25:39 2015 Ronan Boiteau
*/

#include "my.h"

unsigned int	my_putstr_fd(int fd, const char *str)
{
  if (str == NULL)
    {
      write(fd, "(null)", my_strlen("(null)"));
      return (my_strlen("(null)"));
    }
  write(fd, str, my_strlen(str));
  return (my_strlen(str));
}
