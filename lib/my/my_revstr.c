/*
** my_revstr.c for my_revstr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 16:28:45 2015 Ronan Boiteau
** Last update Sun Oct 11 01:05:44 2015 Ronan Boiteau
*/

#include "my.h"

char	*my_revstr(char *str)
{
  char	temp;
  int	index;
  int	lenght;

  index = 0;
  lenght = my_strlen(str) - 1;
  while (index <= lenght / 2)
    {
      temp = str[index];
      str[index] = str[lenght - index];
      str[lenght - index] = temp;
      index = index + 1;
    }
  return (str);
}
