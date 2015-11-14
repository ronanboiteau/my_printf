/*
** my_strncpy.c for my_strncpy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 09:38:55 2015 Ronan Boiteau
** Last update Tue Nov 10 17:06:18 2015 Ronan Boiteau
*/

char		*my_strncpy(char *dest, const char *src, unsigned int nbr)
{
  unsigned int	idx;

  idx = 0;
  while (src[idx] != '\0' && idx < nbr)
    {
      dest[idx] = src[idx];
      idx += 1;
    }
  dest[idx] = '\0';
  return (dest);
}
