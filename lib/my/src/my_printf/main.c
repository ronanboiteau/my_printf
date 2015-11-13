/*
** main.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Nov 10 15:52:59 2015 Ronan Boiteau
** Last update Fri Nov 13 01:26:48 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "my_printf_flags.h"
#include "string.h"
#include "variadic.h"

static int		_char_isflag(char letter, t_fct_tab *fct)
{
  fct->idx = 0;
  while (fct->idx <= FLAGS_NBR)
    {
      if (fct->flags[fct->idx] == letter)
	return (fct->idx);
      fct->idx += 1;
    }
  return (-1);
}

/* static int		_char_isspecifier(char letter) */
/* { */
/*   if (letter >= '#' || letter == '0' || letter == '-' || letter == ' ' || */
/*       letter == '+' || letter == '\'' || letter == 'I') */
/*     return (TRUE); */
/*   return (FALSE); */
/* } */

static int		_char_isletter(char letter)
{
  if ((letter >= 'a' && letter <= 'z') ||
      (letter >= 'A' && letter <= 'Z') ||
      letter == '/' || letter == '{' ||
      letter == '\n')
    return (TRUE);
  return (FALSE);
}

static const char	*_find_flag(t_string *str,
				    unsigned int *printed)
{
  const char		*specifiers;
  int			space;

  space = FALSE;
  specifiers = "%";
  if (!_char_isletter(str->str[str->idx + 1])
      && str->str[str->idx + 1] != '%')
    {
      specifiers = str->str + str->idx + 1;
      while (str->str[str->idx + 1] && !_char_isletter(str->str[str->idx + 1]))
	{
	  if (str->str[str->idx + 1] == ' ')
	    space = TRUE;
	  str->idx += 1;
	}
    }
  if (!str->str[str->idx + 1] && !_char_isletter(str->str[str->idx]))
    return (NULL);
  else
    {
      if (space == TRUE && (str->str[str->idx + 1] == 'i' ||
			    str->str[str->idx + 1] == 'd' ||
			    !_char_isletter(str->str[str->idx + 1])))
	*printed += my_putchar(' ');
      return (specifiers);
    }
}

static void		_init_structures(t_fct_tab *fct,
					 t_string *str,
					 const char *format)
{
  str->str = format;
  str->idx = 0;
  fct->flags = my_strdup("csSidbuxXopnf%");
  fct->idx = 0;
  fct->fct_tab[0] = &_print_char;
  fct->fct_tab[1] = &_print_str;
  fct->fct_tab[2] = &_str_non_printable;
  fct->fct_tab[3] = &_print_int;
  fct->fct_tab[4] = &_print_int;
  fct->fct_tab[5] = &_convert_binary;
  fct->fct_tab[6] = &_convert_decimal;
  fct->fct_tab[7] = &_convert_hex_lowcase;
  fct->fct_tab[8] = &_convert_hex_upcase;
  fct->fct_tab[9] = &_convert_octal;
  fct->fct_tab[10] = &_ptr_to_hex;
  fct->fct_tab[11] = &_ptr_printed_chars;
  fct->fct_tab[12] = &_double_decimal;
  return ;
}

int			my_printf(const char *format, ...)
{
  va_list		ap;
  unsigned int		printed;
  t_fct_tab		fct;
  t_string		str;
  const char		*specifiers;
  int			space;

  _init_structures(&fct, &str, format);
  printed = 0;
  va_start(ap, format);
  str.idx = 0;
  if (str.str == NULL)
    return (-1);
  while (str.str[str.idx] != '\0')
    {
      if (str.str[str.idx] != '%')
	printed += my_putchar(str.str[str.idx]);
      else if (str.str[str.idx] == '%' && str.str[str.idx + 1] == '\0')
	return (-1);
      else if (str.str[str.idx] == '%' && str.str[str.idx + 1])
	{
	  specifiers = _find_flag(&str, &printed);
	  if (specifiers == NULL)
	    return (-1);
	  fct.idx = _char_isflag(str.str[str.idx + 1], &fct);
	  if (fct.idx == -1)
	    {
	      while (str.str[str.idx] && str.str[str.idx] != '%')
		str.idx -= 1;
	      printed += my_putchar('%');
	      str.idx += 1;
	      space = FALSE;
	      while (!_char_isletter(str.str[str.idx]))
		{
		  if (str.str[str.idx] == ' ' && space == FALSE)
		    {
		      printed += my_putchar(' ');
		      space = TRUE;
		    }
		  str.idx += 1;
		}
	      printed += my_putchar(str.str[str.idx]);
	      str.idx -= 1;
	    }
	  else if (fct.idx == FLAGS_NBR)
	    printed += my_putchar('%');
	  else if (fct.flags[fct.idx] == 'f')
	    printed = fct.fct_tab[fct.idx](printed, va_arg(ap, double));
	  else
	    printed = fct.fct_tab[fct.idx](printed, va_arg(ap, void *));
	  str.idx += 1;
	}
      str.idx += 1;
    }
  (void)specifiers;
  va_end(ap);
  free(fct.flags);
  return (printed);
}
