/*
** my_strcat.c for my_strcat in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 17:37:53 2015 Ronan Boiteau
** Last update Sun Nov  8 01:54:55 2015 Ronan Boiteau
*/

char		*my_strcat(char *dest, char *src)
{
  unsigned int	index_dest;
  unsigned int	index_src;

  index_dest = 0;
  index_src = 0;
  while (dest[index_dest] != '\0')
    index_dest += 1;
  while (src[index_src])
    {
      dest[index_dest] = src[index_src];
      index_dest += 1;
      index_src += 1;
    }
  dest[index_dest] = '\0';
  return (dest);
}
