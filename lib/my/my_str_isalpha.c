/*
** my_str_isalpha.c for my_str_isalpha in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 17:37:05 2015 Ronan Boiteau
** Last update Sun Oct 18 17:56:52 2015 Ronan Boiteau
*/

int	my_str_isalpha(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!((str[index] >= 'A' && str[index] <= 'Z') ||
	    (str[index] >= 'a' && str[index] <= 'z') ||
	    (str[index] >= '0' && str[index] <= '9')))
	return (0);
      index = index + 1;
    }
  return (1);
}
