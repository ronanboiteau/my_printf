/*
** my_strlen.c for my_strlen in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 02:49:33 2015 Ronan Boiteau
** Last update Sat Nov  7 15:04:28 2015 Ronan Boiteau
*/

unsigned int	my_strlen(const char *str)
{
  unsigned int index;

  index = 0;
  while (str[index] != '\0')
    index = index + 1;
  return (index);
}
