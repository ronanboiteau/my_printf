/*
** my_str_isupper.c for my_str_isupper in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:09:47 2015 Ronan Boiteau
** Last update Sun Oct 18 18:10:46 2015 Ronan Boiteau
*/

int	my_str_isupper(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!(str[index] >= 'A' && str[index] <= 'Z'))
	return (0);
      index = index + 1;
    }
  return (1);
}
