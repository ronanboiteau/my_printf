/*
** my_strlen.c for my_strlen in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct  5 02:49:33 2015 Ronan Boiteau
** Last update Sun Oct 18 17:02:17 2015 Ronan Boiteau
*/

int	my_strlen(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
    index = index + 1;
  return (index);
}
