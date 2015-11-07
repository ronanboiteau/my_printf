/*
** my_is_prime.c for my_is_prime in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:25:12 2015 Ronan Boiteau
** Last update Sun Oct 18 18:54:27 2015 Ronan Boiteau
*/

int	my_is_prime(int nombre)
{
  int	index;

  if (nombre <= 1)
    return (0);
  index = 2;
  while (index < nombre)
    {
      if (nombre % index == 0)
	return (0);
      index = index + 1;
    }
  return (1);
}
