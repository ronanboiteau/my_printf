/*
** my_sort_int_tab.c for my_sort_int_tab in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:21:10 2015 Ronan Boiteau
** Last update Sun Nov  8 02:09:21 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"

void		my_sort_int_tab(int *tab, int size)
{
  unsigned int	index;
  int		sorted;

  sorted = FALSE;
  while (!sorted)
    {
      sorted = TRUE;
      index = 0;
      while (tab[index + 1])
	{
	  if (tab[index] > tab[index + 1])
	    {
	      my_swap(&tab[index], &tab[index + 1]);
	      sorted = FALSE;
	    }
	  index += 1;
	}
      my_max_int_tab(tab, size);
      index += 1;
    }
  return ;
}
