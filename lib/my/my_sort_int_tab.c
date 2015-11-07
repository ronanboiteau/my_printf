/*
** my_sort_int_tab.c for my_sort_int_tab in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:21:10 2015 Ronan Boiteau
** Last update Wed Nov  4 18:56:09 2015 Ronan Boiteau
*/

#include "my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	index;
  int	sorted;

  sorted = 0;
  while (!sorted)
    {
      sorted = 1;
      index = 0;
      while (tab[index + 1])
	{
	  if (tab[index] > tab[index + 1])
	    {
	      my_swap(&tab[index], &tab[index + 1]);
	      sorted = 0;
	    }
	  index = index + 1;
	}
      my_max_int_tab(tab, size);
      index = index + 1;
    }
  return ;
}
