/*
** my_strncat.c for my_strncat in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Oct  6 20:46:17 2015 Ronan Boiteau
** Last update Sun Nov  8 02:02:03 2015 Ronan Boiteau
*/

char		*my_strncat(char *dest, char *src, unsigned int nbr)
{
  unsigned int	index_dest;
  unsigned int	index_src;

  index_dest = 0;
  index_src = 0;
  while (dest[index_dest] != '\0')
    index_dest += 1;
  while (src[index_src] && index_src < nbr)
    {
      dest[index_dest] = src[index_src];
      index_dest += 1;
      index_src += 1;
    }
  dest[index_dest] = '\0';
  return (dest);
}
