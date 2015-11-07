/*
** my_square_root.c for my_square_root in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct  4 17:40:19 2015 Ronan Boiteau
** Last update Wed Oct 28 12:27:08 2015 Ronan Boiteau
*/

int		my_square_root(int nb)
{
  long long	tmp;
  int		result;

  result = 0;
  if (nb >= 0)
    {
      while ((tmp = (long long)result * (long long)result) != nb
	     && result <= nb)
	result = result + 1;
    }
  else
    return (0);
  if (result == nb + 1)
    return (0);
  else
    return (result);
}
