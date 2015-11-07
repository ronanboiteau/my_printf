/*
** my_char_isnum.c for my_char_isnum in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:08:36 2015 Ronan Boiteau
** Last update Sun Oct 18 19:13:29 2015 Ronan Boiteau
*/

int	my_char_isnum(char letter)
{
  if (!(letter >= '0' && letter <= '9'))
    return (0);
  else
    return (1);
}
