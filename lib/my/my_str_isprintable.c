/*
** my_str_isprintable.c for my_str_isprintable in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:17:26 2015 Ronan Boiteau
** Last update Sun Oct 18 18:19:31 2015 Ronan Boiteau
*/

int	my_str_isprintable(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!(str[index] >= 32 && str[index] <= 126))
	return (0);
      index = index + 1;
    }
  return (1);
}
