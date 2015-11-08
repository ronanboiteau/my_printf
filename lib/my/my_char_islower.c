/*
** my_char_islower.c for my_char_islower in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:08:00 2015 Ronan Boiteau
** Last update Sun Nov  8 02:06:14 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_char_islower(char letter)
{
  if (!(letter >= 'a' && letter <= 'z'))
    return (FALSE);
  return (TRUE);
}
