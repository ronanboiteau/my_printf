/*
** my_getnbr.c for my_getnbr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:42:47 2015 Ronan Boiteau
** Last update Tue Nov 10 16:58:20 2015 Ronan Boiteau
*/

#include "my.h"

static int	_skip_letters(const char *str)
{
  int		idx;

  idx = 0;
  while (str[idx] && str[idx] != '-' && str[idx] != '+' &&
	 (str[idx] < '0' || str[idx] > '9'))
    idx += 1;
  while ((str[idx + 1] && (str[idx + 1] == '-' ||
			     str[idx + 1] == '+'))
	 || str[idx] == '+')
    idx += 1;
  return (idx);
}

static int	_set_reverser(const char *str, int *idx)
{
  if (str[*idx] == '-')
    {
      *idx += 1;
      return (-1);
    }
  return (1);
}

int		my_getnbr(const char *str)
{
  long long	result;
  int		reverser;
  int		idx;
  int		lenght;
  int		int_min;
  int		int_max;

  result = 0;
  int_min = -2147483648;
  int_max = 2147483647;
  idx = _skip_letters(str);
  reverser = _set_reverser(str, &idx);
  lenght = idx;
  while (str[lenght] >= '0' && str[lenght] <= '9')
    lenght += 1;
  while (idx < lenght)
    {
      result = result + (long long)((str[idx] - '0') *
				    my_power(10, lenght - idx - 1));
      if (result < int_min || result - 1 > int_max)
	return (0);
      idx += 1;
    }
  result *= reverser;
  return ((int)result);
}
