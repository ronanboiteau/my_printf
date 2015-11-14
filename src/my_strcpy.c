/*
** my_strcpy.c for my_strcpy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 09:30:56 2015 Ronan Boiteau
** Last update Tue Nov 10 17:01:50 2015 Ronan Boiteau
*/

char		*my_strcpy(char *dest, const char *src)
{
  unsigned int	idx;

  idx = 0;
  while (src[idx] != '\0')
    {
      dest[idx] = src[idx];
      idx += 1;
    }
  dest[idx] = '\0';
  return (dest);
}
