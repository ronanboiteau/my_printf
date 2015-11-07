/*
** match.c for match in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct  4 00:18:09 2015 Ronan Boiteau
** Last update Fri Oct 16 14:47:32 2015 Ronan Boiteau
*/

int	match(char *s1, char *s2)
{
  if ((*s1 == '\0') && (*s2 == '\0'))
    return (1);
  else if (*s1 == *s2)
    return (match(s1 + 1, s2 + 1));
  else if ((*s1 == '*') || (*s2 == '*'))
    return (match(s1, s2 + 1) || match(s1 + 1, s2));
  else
    return (0);
}
