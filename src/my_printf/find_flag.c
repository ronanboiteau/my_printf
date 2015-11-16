/*
** find_flag.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov 14 09:13:48 2015 Ronan Boiteau
** Last update Mon Nov 16 23:26:23 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "my_printf_flags.h"

static int		_find_extra_chars(t_string *str)
{
  char			extra_char;

  while (str->str[str->idx + 1] && !_char_isletter(str->str[str->idx + 1]))
    {
      if (str->str[str->idx + 1] == ' ' && extra_char != '+')
	extra_char = ' ';
      else if (str->str[str->idx + 1] == '+')
	extra_char = '+';
      str->idx += 1;
    }
  return (extra_char);
}

static unsigned int	_add_extra_spaces(t_string *str,
					  char extra_char,
					  unsigned int *printed,
					  va_list ap)
{
  va_list		ap_tmp;

  *ap_tmp = *ap;
  if (extra_char && (str->str[str->idx + 1] == 'i' ||
		     str->str[str->idx + 1] == 'd' ||
		     !_char_isletter(str->str[str->idx + 1])))
    {
      if ((str->str[str->idx + 1] == 'i' || str->str[str->idx + 1] == 'd')
	  && va_arg(ap_tmp, int) >= 0)
	*printed += my_putchar(extra_char);
      else if (!_char_isletter(str->str[str->idx + 1]) && extra_char == ' ')
	*printed += my_putchar(' ');
    }
  return (*printed);
}

const char		*_find_flag(t_string *str,
				    unsigned int *printed,
				    va_list ap)
{
  const char		*specifiers;
  char			extra_char;
  va_list		ap_tmp;

  *ap_tmp = *ap;
  specifiers = "%";
  extra_char = '\0';
  if (!_char_isletter(str->str[str->idx + 1])
      && str->str[str->idx + 1] != '%')
    {
      specifiers = str->str + str->idx + 1;
      extra_char = _find_extra_chars(str);
    }
  if (!str->str[str->idx + 1] && !_char_isletter(str->str[str->idx]))
    return (NULL);
  else
    {
      printed += _add_extra_spaces(str, extra_char, printed, ap);
      return (specifiers);
    }
}
