/*
** my_square_root.c for my_square_root in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct  4 17:40:19 2015 Ronan Boiteau
** Last update Sun Nov  8 01:53:23 2015 Ronan Boiteau
*/

int		my_square_root(int nbr)
{
  long long	tmp;
  int		result;

  result = 0;
  if (nbr >= 0)
    {
      while ((tmp = (long long)result * (long long)result) != nbr
	     && result <= nbr)
	result += 1;
    }
  else
    return (0);
  if (result == nbr + 1)
    return (0);
  else
    return (result);
}
