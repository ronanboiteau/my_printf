/*
** my_strcapitalize.c for my_strcapitalize in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 17:22:33 2015 Ronan Boiteau
** Last update Sun Nov  8 01:54:01 2015 Ronan Boiteau
*/

#include "my.h"

char		*my_strcapitalize(char *str)
{
  unsigned int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (my_char_isalpha(str[index]) == 0 || index == 0)
	{
	  while (my_char_isalpha(str[index]) == 0)
	    index += 1;
	  if (my_char_islower(str[index]))
	    str[index] = str[index] - 32;
	}
      index += 1;
    }
  return (str);
}
