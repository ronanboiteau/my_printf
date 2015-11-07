/*
** my_str_isnum.c for my_str_isnum in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:01:08 2015 Ronan Boiteau
** Last update Sun Oct 18 18:02:02 2015 Ronan Boiteau
*/

int	my_str_isnum(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!(str[index] >= '0' && str[index] <= '9'))
	return (0);
      index = index + 1;
    }
  return (1);
}
