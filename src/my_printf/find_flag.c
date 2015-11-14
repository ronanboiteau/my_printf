/*
** find_flag.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov 14 09:13:48 2015 Ronan Boiteau
** Last update Sat Nov 14 09:28:58 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "my_printf_flags.h"

static int		_find_space(t_string *str)
{
  int			space;

  while (str->str[str->idx + 1] && !_char_isletter(str->str[str->idx + 1]))
    {
      if (str->str[str->idx + 1] == ' ')
	space = TRUE;
      str->idx += 1;
    }
  return (space);
}

static unsigned int	_add_extra_spaces(t_string *str,
					  int space,
					  unsigned int *printed,
					  va_list ap)
{
  va_list ap_tmp;

  *ap_tmp = *ap;
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
  return (*printed);
}

const char		*_find_flag(t_string *str,
				    unsigned int *printed,
				    va_list ap)
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
      space = _find_space(str);
    }
  if (!str->str[str->idx + 1] && !_char_isletter(str->str[str->idx]))
    return (NULL);
  else
    {
      printed += _add_extra_spaces(str, space, printed, ap);
      return (specifiers);
    }
}
