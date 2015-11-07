/*
** my_strcpy.c for my_strcpy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 09:30:56 2015 Ronan Boiteau
** Last update Sun Oct 18 17:02:13 2015 Ronan Boiteau
*/

char	*my_strcpy(char *dest, char *src)
{
  int	index;

  index = 0;
  while (src[index] != '\0')
    {
      dest[index] = src[index];
      index = index + 1;
    }
  dest[index] = '\0';
  return (dest);
}
