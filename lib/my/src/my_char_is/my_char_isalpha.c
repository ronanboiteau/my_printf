/*
** my_char_isalpha.c for my_char_isalpha in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:06:02 2015 Ronan Boiteau
** Last update Sun Nov  8 02:06:10 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_char_isalpha(char letter)
{
  if (!((letter >= 'A' && letter <= 'Z') ||
	(letter >= 'a' && letter <= 'z') ||
	(letter >= '0' && letter <= '9')))
    return (FALSE);
  return (TRUE);
}
