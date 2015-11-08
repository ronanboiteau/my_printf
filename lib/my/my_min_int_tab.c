/*
** my_min_int_tab.c for my_min_int_tab in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Nov  2 23:01:00 2015 Ronan Boiteau
** Last update Sun Nov  8 02:31:33 2015 Ronan Boiteau
*/

int		my_min_int_tab(int *tab, unsigned int size)
{
  unsigned int	index;
  int		lowest;

  index = 0;
  lowest = tab[index];
  while (index < size)
    {
      if (tab[index] > lowest)
	lowest = tab[index];
      index += 1;
    }
  return (lowest);
}
