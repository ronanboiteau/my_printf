/*
** my_strncpy.c for my_strncpy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 09:38:55 2015 Ronan Boiteau
** Last update Sun Oct 18 17:02:27 2015 Ronan Boiteau
*/

char	*my_strncpy(char *dest, char *src, int nbr)
{
  int	index;

  index = 0;
  while (src[index] != '\0' && index < nbr)
    {
      dest[index] = src[index];
      index = index + 1;
    }
  dest[index] = '\0';
  return (dest);
}
