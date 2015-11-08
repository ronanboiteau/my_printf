/*
** my_char_isprintable.c for my_char_isprintable in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:11:26 2015 Ronan Boiteau
** Last update Sun Nov  8 02:06:51 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_char_isprintable(char letter)
{
  if (!(letter >= 32 && letter <= 126))
    return (FALSE);
  return (TRUE);
}
