/*
** my_strlen.c for my_strlen in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 02:49:33 2015 Ronan Boiteau
** Last update Sun Nov  8 02:25:23 2015 Ronan Boiteau
*/

int		my_strlen(const char *str)
{
  int		index;

  index = 0;
  while (str[index] != '\0')
    index += 1;
  return (index);
}
