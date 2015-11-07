/*
** nmatch.c for nmatch in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Oct 10 22:11:14 2015 Ronan Boiteau
** Last update Fri Oct 16 14:47:04 2015 Ronan Boiteau
*/

int	nmatch(char *s1, char *s2)
{
  if ((*s1 == '\0') && (*s2 == '\0'))
    return (1);
  else if ((*s1 != '\0') && (*s2 == '*'))
    return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
  else if ((*s1 == '\0') && (*s2 == '*'))
    return (nmatch(s1, s2 + 1));
  else if ((*s2 != '\0') && (*s1 == '*'))
    return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
  else if ((*s2 == '\0') && (*s1 == '*'))
    return (nmatch(s1 + 1, s2));
  else if (*s1 == *s2)
    return (nmatch(s1 + 1, s2 + 1));
  else
    return (0);
}
