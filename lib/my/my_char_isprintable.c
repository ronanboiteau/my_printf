/*
** my_char_isprintable.c for my_char_isprintable in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:11:26 2015 Ronan Boiteau
** Last update Sun Oct 18 19:13:35 2015 Ronan Boiteau
*/

int	my_char_isprintable(char letter)
{
  if (!(letter >= 32 && letter <= 126))
    return (0);
  else
    return (1);
}
