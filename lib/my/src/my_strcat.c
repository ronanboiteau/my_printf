/*
** my_strcat.c for my_strcat in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 17:37:53 2015 Ronan Boiteau
** Last update Tue Nov 10 17:01:33 2015 Ronan Boiteau
*/

char		*my_strcat(char *dest, const char *src)
{
  unsigned int	idx_dest;
  unsigned int	idx_src;

  idx_dest = 0;
  idx_src = 0;
  while (dest[idx_dest] != '\0')
    idx_dest += 1;
  while (src[idx_src])
    {
      dest[idx_dest] = src[idx_src];
      idx_dest += 1;
      idx_src += 1;
    }
  dest[idx_dest] = '\0';
  return (dest);
}
