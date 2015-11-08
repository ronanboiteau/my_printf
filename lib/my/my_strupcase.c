/*
** my_strupcase.c for my_strupcase in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 16:56:12 2015 Ronan Boiteau
** Last update Sun Nov  8 02:04:06 2015 Ronan Boiteau
*/

char		*my_strupcase(char *str)
{
  unsigned int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (str[index] >= 'a' && str[index] <= 'z')
	str[index] = str[index] - 32;
      index += 1;
    }
  return (str);
}
