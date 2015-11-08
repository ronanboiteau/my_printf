/*
** my_str_isalpha.c for my_str_isalpha in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 17:37:05 2015 Ronan Boiteau
** Last update Sun Nov  8 02:09:50 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_str_isalpha(char *str)
{
  unsigned int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!((str[index] >= 'A' && str[index] <= 'Z') ||
	    (str[index] >= 'a' && str[index] <= 'z') ||
	    (str[index] >= '0' && str[index] <= '9')))
	return (FALSE);
      index += 1;
    }
  return (TRUE);
}
