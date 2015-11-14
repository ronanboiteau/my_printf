/*
** my_printf.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov 14 08:17:53 2015 Ronan Boiteau
** Last update Sat Nov 14 08:40:49 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "my_printf_flags.h"
#include "variadic.h"

static const char	*_find_flag(t_string *str,
				    unsigned int *printed, va_list ap)
{
  const char		*specifiers;
  int			space;
  va_list		ap_tmp;

  *ap_tmp = *ap;
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
			    str->str[str->idx + 1] == 'f' ||
			    !_char_isletter(str->str[str->idx + 1])))
	{
	  if ((str->str[str->idx + 1] == 'i' || str->str[str->idx + 1] == 'd')
	      && va_arg(ap_tmp, int) >= 0)
	    *printed += my_putchar(' ');
	  else if (str->str[str->idx + 1] == 'f' &&
		   va_arg(ap_tmp, double) >= 0)
	    *printed += my_putchar(' ');
	  else if (!_char_isletter(str->str[str->idx + 1]))
	    *printed += my_putchar(' ');
	}
      return (specifiers);
    }
}

int			my_printf(const char *format, ...)
{
  va_list		ap;
  unsigned int		printed;
  t_string		str;
  const char		*specifiers;
  int			idx;
  int			space;
  t_flag		flags[FLAGS_NBR];

  printed = 0;
  _init_structures(flags, &str, format);
  va_start(ap, format);
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
	  specifiers = _find_flag(&str, &printed, ap);
	  if (specifiers == NULL)
	    return (-1);
	  idx = _char_isflag(str.str[str.idx + 1], flags);
	  if (idx == -1)
	    {
	      while (str.str[str.idx] && str.str[str.idx] != '%')
	  	str.idx -= 1;
	      printed += my_putchar('%');
	      str.idx += 1;
	      space = FALSE;
	      while (str.str[str.idx] && !_char_isletter(str.str[str.idx]))
	  	{
	  	  if (str.str[str.idx] == ' ' && space == FALSE)
	  	    {
	  	      printed += my_putchar(' ');
	  	      space = TRUE;
	  	    }
	  	  str.idx += 1;
	  	}
	      if (str.str[str.idx] && str.str[str.idx] != '%')
		printed += my_putchar(str.str[str.idx]);
	      str.idx -= 1;
	    }
	  else
	    printed = flags[idx].fct(printed, ap);
	  str.idx += 1;
	}
      str.idx += 1;
    }
  va_end(ap);
  return (printed);
}
