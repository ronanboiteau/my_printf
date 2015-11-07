/*
** my_strncmp.c for my_strncmp.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 14:18:14 2015 Ronan Boiteau
** Last update Sun Oct 18 17:02:24 2015 Ronan Boiteau
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	index;

  index = 0;
  while (s1[index] != '\0' && s2[index] != '\0' && index < n)
    {
      if (s1[index] != s2[index])
	return (s1[index] - s2[index]);
      index = index + 1;
    }
  return (0);
}
