/*
** my_strncpy.c for my_strncpy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 09:38:55 2015 Ronan Boiteau
** Last update Sun Nov  8 02:03:28 2015 Ronan Boiteau
*/

char		*my_strncpy(char *dest, char *src, unsigned int nbr)
{
  unsigned int	index;

  index = 0;
  while (src[index] != '\0' && index < nbr)
    {
      dest[index] = src[index];
      index += 1;
    }
  dest[index] = '\0';
  return (dest);
}
