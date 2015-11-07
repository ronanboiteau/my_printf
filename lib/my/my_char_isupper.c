/*
** my_char_isupper.c for my_char_isupper in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:09:28 2015 Ronan Boiteau
** Last update Sun Oct 18 19:13:41 2015 Ronan Boiteau
*/

int	my_char_isupper(char letter)
{
  if (!(letter >= 'A' && letter <= 'Z'))
    return (0);
  else
    return (1);
}
