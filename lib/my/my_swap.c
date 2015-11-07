/*
** my_swap.c for my_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Oct  1 08:58:07 2015 Ronan Boiteau
** Last update Sun Oct 18 17:02:37 2015 Ronan Boiteau
*/

void	my_swap(int *a, int *b)
{
  int	temp;

  temp = *a;
  *a = *b;
  *b = temp;
  return ;
}
