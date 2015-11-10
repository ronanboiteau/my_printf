/*
** match.c for match in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct  4 00:18:09 2015 Ronan Boiteau
** Last update Tue Nov 10 16:55:40 2015 Ronan Boiteau
*/

int		match(const char *str1, const char *str2)
{
  if ((*str1 == '\0') && (*str2 == '\0'))
    return (1);
  else if (*str1 == *str2)
    return (match(str1 + 1, str2 + 1));
  else if ((*str1 == '*') || (*str2 == '*'))
    return (match(str1, str2 + 1) || match(str1 + 1, str2));
  else
    return (0);
}
