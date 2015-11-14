/*
** my_printf.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov 14 08:17:53 2015 Ronan Boiteau
** Last update Sat Nov 14 09:28:35 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "my_printf_flags.h"

static unsigned int	_if_not_flag(unsigned int printed, t_string *str)
{
  int			space;

  while (str->str[str->idx] && str->str[str->idx] != '%')
    str->idx -= 1;
  printed += my_putchar('%');
  str->idx += 1;
  space = FALSE;
  while (str->str[str->idx] && !_char_isletter(str->str[str->idx]))
    {
      if (str->str[str->idx] == ' ' && space == FALSE)
	{
	  printed += my_putchar(' ');
	  space = TRUE;
	}
      str->idx += 1;
    }
  if (str->str[str->idx] && str->str[str->idx] != '%')
    printed += my_putchar(str->str[str->idx]);
  str->idx -= 1;
  return (printed);
}

static unsigned int	_flags_handler(t_flag *flags,
				       t_string *str,
				       va_list ap)
{
  const char		*specifiers;
  int			idx;
  unsigned int		printed;

  printed = 0;
  specifiers = _find_flag(str, &printed, ap);
  if (specifiers == NULL)
    return (-1);
  idx = _char_isflag(str->str[str->idx + 1], flags);
  if (idx == -1)
    printed += _if_not_flag(0, str);
  else
    printed = flags[idx].fct(printed, ap);
  str->idx += 1;
  return (printed);
}

int			my_printf(const char *format, ...)
{
  va_list		ap;
  unsigned int		printed;
  t_string		str;
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
	printed += _flags_handler(flags, &str, ap);
      str.idx += 1;
    }
  va_end(ap);
  return (printed);
}
