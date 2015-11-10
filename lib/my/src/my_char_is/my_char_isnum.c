/*
** my_char_isnum.c for my_char_isnum in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:08:36 2015 Ronan Boiteau
** Last update Sun Nov  8 02:06:19 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_char_isnum(char letter)
{
  if (!(letter >= '0' && letter <= '9'))
    return (FALSE);
  return (TRUE);
}
