/*
** my_getnbr.c for my_getnbr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:42:47 2015 Ronan Boiteau
** Last update Sun Nov  8 02:07:12 2015 Ronan Boiteau
*/

#include "my.h"

static int	_skip_letters(char *str)
{
  int		index;

  index = 0;
  while (str[index] && str[index] != '-' && str[index] != '+' &&
	 (str[index] < '0' || str[index] > '9'))
    index += 1;
  while ((str[index + 1] && (str[index + 1] == '-' ||
			     str[index + 1] == '+'))
	 || str[index] == '+')
    index += 1;
  return (index);
}

static int	_set_reverser(char *str, int *index)
{
  if (str[*index] == '-')
    {
      *index += 1;
      return (-1);
    }
  return (1);
}

int		my_getnbr(char *str)
{
  long long	result;
  int		reverser;
  int		index;
  int		lenght;
  int		int_min;
  int		int_max;

  result = 0;
  int_min = -2147483648;
  int_max = 2147483647;
  index = _skip_letters(str);
  reverser = _set_reverser(str, &index);
  lenght = index;
  while (str[lenght] >= '0' && str[lenght] <= '9')
    lenght += 1;
  while (index < lenght)
    {
      result = result + (long long)((str[index] - '0') *
				    my_power(10, lenght - index - 1));
      if (result < int_min || result - 1 > int_max)
	return (0);
      index += 1;
    }
  result *= reverser;
  return ((int)result);
}
