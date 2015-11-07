/*
** my_min_int_tab.c for my_min_int_tab in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Nov  2 23:01:00 2015 Ronan Boiteau
** Last update Mon Nov  2 23:01:29 2015 Ronan Boiteau
*/

int	my_min_int_tab(int *tab, int size)
{
  int	lowest;
  int	index;

  index = 0;
  lowest = tab[index];
  while (index < size)
    {
      if (tab[index] > lowest)
	lowest = tab[index];
      index = index + 1;
    }
  return (lowest);
}
