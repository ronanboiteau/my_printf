/*
** my_strncmp.c for my_strncmp.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 14:18:14 2015 Ronan Boiteau
** Last update Tue Nov 10 17:05:31 2015 Ronan Boiteau
*/

int		my_strncmp(const char *str1,
			   const char *str2,
			   unsigned int nbr)
{
  unsigned int	idx;

  idx = 0;
  while (str1[idx] != '\0' && str2[idx] != '\0' && idx < nbr)
    {
      if (str1[idx] != str2[idx])
	return (str1[idx] - str2[idx]);
      idx += 1;
    }
  return (0);
}
