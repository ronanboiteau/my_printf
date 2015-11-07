/*
** my_str_islower.c for my_str_islower in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:05:52 2015 Ronan Boiteau
** Last update Sun Oct 18 18:07:24 2015 Ronan Boiteau
*/

int	my_str_islower(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!(str[index] >= 'a' && str[index] <= 'z'))
	return (0);
      index = index + 1;
    }
  return (1);
}
