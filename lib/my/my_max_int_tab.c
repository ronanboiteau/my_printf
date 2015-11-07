/*
** my_max_int_tab.c for my_max_int_tab in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:48:15 2015 Ronan Boiteau
** Last update Sun Oct 18 19:50:16 2015 Ronan Boiteau
*/

int	my_max_int_tab(int *tab, int size)
{
  int	greatest;
  int	index;

  index = 0;
  greatest = tab[index];
  while (index < size)
    {
      if (tab[index] > greatest)
	greatest = tab[index];
      index = index + 1;
    }
  return (greatest);
}
