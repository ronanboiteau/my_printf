/*
** main.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Nov  2 14:21:07 2015 Ronan Boiteau
** Last update Sat Nov  7 04:26:33 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_printf.h"
#include <stdio.h>

unsigned int	_find_flag(t_string *str, unsigned int printed)
{
  if (!my_char_isalpha(str->str[str->idx + 1])
      && str->str[str->idx + 1] != '%')
    {
      printed += my_putchar(' ');
      while (!my_char_isalpha(str->str[str->idx + 1]))
	str->idx += 1;
    }
  return (printed);
}

void		_init_structures(t_fct_tab *fct, t_string *str, char *string)
{
  str->str = string;
  str->idx = 0;
  fct->flags = my_strdup("bdiSs");
  fct->idx = 0;
  fct->fct_tab[0] = &_binary_base;
  fct->fct_tab[1] = &_print_int;
  fct->fct_tab[2] = &_print_int;
  fct->fct_tab[3] = &_print_str;
  fct->fct_tab[4] = &_str_non_printable;
  return ;
}

int		my_printf(char *string, ...)
{
  va_list	ap;
  unsigned int	printed;
  int		flag_found;
  t_fct_tab	fct;
  t_string	str;

  _init_structures(&fct, &str, string);
  printed = 0;
  va_start(ap, string);
  str.idx = 0;
  while (str.str[str.idx] != '\0')
    {
      if (str.str[str.idx] != '%')
	printed += my_putchar(str.str[str.idx]);
      else if (str.str[str.idx] == '%' && str.str[str.idx + 1])
	{
	  printed = _find_flag(&str, printed);
	  flag_found = 0;
	  fct.idx = 0;
	  while (fct.flags[fct.idx] && flag_found == 0)
	    {
	      if (str.str[str.idx + 1] == '%')
		{
		  printed += my_putchar('%');
		  flag_found = 1;
		}
	      else if (fct.flags[fct.idx] == str.str[str.idx + 1])
		{
		  printed = fct.fct_tab[fct.idx](printed, va_arg(ap, void *));
		  flag_found = 1;
		}
	      fct.idx += 1;
	    }
	  if (flag_found == 0)
	    {
	      printed += my_putchar(str.str[str.idx]);
	      printed += my_putchar(str.str[str.idx + 1]);
	    }
	  str.idx += 1;
	}
      str.idx += 1;
    }
  va_end(ap);
  return (printed);
}

int		main(void)
{
  int		i_printed;
  int		he_printed;

  i_printed = 0;
  he_printed = 0;
  i_printed = my_printf("%b foo %F %s %S / %i in binary: %b\n", 42, "bar", "baz", 45, 45);
  /* he_printed = printf("%s bar \n", "foo", 42); */
  my_putstr("my_printf: ");
  my_put_nbr(i_printed);
  my_putstr("\nprintf:    ");
  my_put_nbr(he_printed);
  my_putstr("\n");
  return (EXIT_SUCCESS);
}

/* Handle NULL value */

/* Function pointer */

/* Handle this!! */
/* i_printed = my_printf("foo %%%%% sbaz qux\n", "bar", "qux"); */
/* he_printed = printf("foo %%%%% sbaz qux\n", "bar"); */

/* Buffer overflows? */

/* Makefile compile pas sans dossiers my/ ???? */


/* Bonus: handle specifiers:
** Website: cpp reference printf
** %0500d
** %10s
** %-10s
** %*s
*/
