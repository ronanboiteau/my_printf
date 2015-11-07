/*
** my_char_islower.c for my_char_islower in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:08:00 2015 Ronan Boiteau
** Last update Sun Oct 18 19:12:55 2015 Ronan Boiteau
*/

int	my_char_islower(char letter)
{
  if (!(letter >= 'a' && letter <= 'z'))
    return (0);
  else
    return (1);
}
