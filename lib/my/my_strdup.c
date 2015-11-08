/*
** my_strdup.c for my_strdup in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Oct  7 08:50:44 2015 Ronan Boiteau
** Last update Sun Nov  8 01:57:04 2015 Ronan Boiteau
*/

#include "my.h"

char		*my_strdup(char *src)
{
  int		lenght;
  int		index;
  char		*new_str;

  index = 0;
  lenght = my_strlen(src);
  if ((new_str = malloc(sizeof(*new_str) * lenght + 1)) == NULL)
    {
      write(2, "Out of memory!\n", 15);
      return ("\0");
    }
  while (src[index] != '\0')
    {
      new_str[index] = src[index];
      index += 1;
    }
  new_str[index] = '\0';
  return (new_str);
}
