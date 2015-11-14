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
  unsigned int	idx;

  idx = 0;
  while (str[idx] != '\0')
    {
      if (!((str[idx] >= 'A' && str[idx] <= 'Z') ||
	    (str[idx] >= 'a' && str[idx] <= 'z') ||
	    (str[idx] >= '0' && str[idx] <= '9')))
	return (FALSE);
      idx += 1;
    }
  return (TRUE);
}
