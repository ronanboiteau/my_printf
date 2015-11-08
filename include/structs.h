/*
** structs.h for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Nov  8 02:37:53 2015 Ronan Boiteau
** Last update Sun Nov  8 02:48:34 2015 Ronan Boiteau
*/

#ifndef STRUCTS_H_
# define STRUCTS_H_

# define FLAGS_NBR (11)

typedef struct	s_fct_tab
{
  char		*flags;
  unsigned int	idx;
  unsigned int	(*fct_tab[FLAGS_NBR])(unsigned int, ...);
}		t_fct_tab;

typedef struct	s_string
{
  char		*str;
  unsigned int	idx;
}		t_string;

#endif /* !STRUCTS_H_ */

