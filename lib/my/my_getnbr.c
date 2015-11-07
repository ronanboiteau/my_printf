/*
** my_getnbr.c for my_getnbr in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:42:47 2015 Ronan Boiteau
** Last update Sat Oct 24 02:43:29 2015 Ronan Boiteau
*/

#include "my.h"

int		my_getnbr_skip_letters(char *str)
{
  int		index;

  index = 0;
  while (str[index] && str[index] != '-' && str[index] != '+' &&
	 (str[index] < '0' || str[index] > '9'))
    index = index + 1;
  while ((str[index + 1] && (str[index + 1] == '-' ||
			     str[index + 1] == '+'))
	 || str[index] == '+')
    index = index + 1;
  return (index);
}

int		my_getnbr_set_reverser(char *str, int *index)
{
  if (str[*index] == '-')
    {
      *index = *index + 1;
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
  index = my_getnbr_skip_letters(str);
  reverser = my_getnbr_set_reverser(str, &index);
  lenght = index;
  while (str[lenght] >= '0' && str[lenght] <= '9')
    lenght = lenght + 1;
  while (index < lenght)
    {
      result = result + (long long)((str[index] - '0') *
				    my_power_rec(10, lenght - index - 1));
      if (result < int_min || result - 1 > int_max)
	return (0);
      index = index + 1;
    }
  result = result * reverser;
  return ((int)result);
}
