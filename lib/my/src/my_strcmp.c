/*
** my_strcmp.c for my_strcmp in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 13:33:12 2015 Ronan Boiteau
** Last update Sun Nov  8 01:55:46 2015 Ronan Boiteau
*/

int		my_strcmp(char *str1, char *str2)
{
  unsigned int	idx;

  idx = 0;
  while (str1[idx] != '\0' && str2[idx] != '\0')
    {
      if (str1[idx] != str2[idx])
	return (str1[idx] - str2[idx]);
      idx += 1;
    }
  return (0);
}
