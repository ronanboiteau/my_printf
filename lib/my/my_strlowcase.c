/*
** my_strlowcase.c for my_strlowcase in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 17:10:13 2015 Ronan Boiteau
** Last update Sun Oct 18 17:14:28 2015 Ronan Boiteau
*/

char	*my_strlowcase(char *str)
{
  int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= 'A' && str[index] <= 'Z')
	str[index] = str[index] + 32;
      index = index + 1;
    }
  return (str);
}
