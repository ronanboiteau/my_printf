/*
** my_strcpy.c for my_strcpy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 09:30:56 2015 Ronan Boiteau
** Last update Sun Nov  8 01:56:11 2015 Ronan Boiteau
*/

char		*my_strcpy(char *dest, char *src)
{
  unsigned int	index;

  index = 0;
  while (src[index] != '\0')
    {
      dest[index] = src[index];
      index += 1;
    }
  dest[index] = '\0';
  return (dest);
}
