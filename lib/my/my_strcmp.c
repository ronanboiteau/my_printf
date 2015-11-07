/*
** my_strcmp.c for my_strcmp in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 13:33:12 2015 Ronan Boiteau
** Last update Sun Oct 18 17:02:09 2015 Ronan Boiteau
*/

int	my_strcmp(char *s1, char *s2)
{
  int	index;

  index = 0;
  while (s1[index] != '\0' && s2[index] != '\0')
    {
      if (s1[index] != s2[index])
	return (s1[index] - s2[index]);
      index = index + 1;
    }
  return (0);
}
