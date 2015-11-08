/*
** my_strncmp.c for my_strncmp.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 14:18:14 2015 Ronan Boiteau
** Last update Sun Nov  8 02:03:01 2015 Ronan Boiteau
*/

int		my_strncmp(char *str1, char *str2, unsigned int nbr)
{
  unsigned int	index;

  index = 0;
  while (str1[index] != '\0' && str2[index] != '\0' && index < nbr)
    {
      if (str1[index] != str2[index])
	return (str1[index] - str2[index]);
      index += 1;
    }
  return (0);
}
