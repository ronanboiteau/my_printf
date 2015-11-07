/*
** my_power_rec.c for my_power_rec in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct  4 00:04:26 2015 Ronan Boiteau
** Last update Sun Oct 18 17:01:30 2015 Ronan Boiteau
*/

int	my_power_rec(int nbr, int power)
{
  if (power > 0)
    return (nbr * my_power_rec(nbr, power - 1));
  else if (power == 0)
    return (1);
  return (0);
}
