/*
** main.c for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Nov 10 15:52:59 2015 Ronan Boiteau
** Last update Fri Nov 13 19:34:56 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "my_printf_flags.h"
#include "string.h"
#include "variadic.h"

static int		_char_isflag(char letter, t_flag *flags)
{
  int			idx;

  while (idx < FLAGS_NBR)
    {
      if (letter == flags[idx].flag_char)
	return (idx);
      idx += 1;
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

static int		_init_flag(char flag_char,
				   unsigned int (*fct)(unsigned int, va_list),
				   t_flag *flags)
{
  flags->flag_char = flag_char;
  flags->fct = fct;
  return (0);
}

static void		_init_structures(t_flag *flags,
					  t_string *str,
					  const char *format)
{
  str->str = format;
  str->idx = 0;
  _init_flag('c', &_print_char, &flags[0]);
  _init_flag('n', &_ptr_printed_chars, &flags[1]);
  _init_flag('S', &_str_non_printable, &flags[2]);
  _init_flag('i', &_print_int, &flags[3]);
  _init_flag('d', &_print_int, &flags[4]);
  _init_flag('b', &_convert_binary, &flags[5]);
  _init_flag('s', &_print_str, &flags[6]);
  _init_flag('x', &_convert_hex_lowcase, &flags[7]);
  _init_flag('X', &_convert_hex_upcase, &flags[8]);
  _init_flag('o', &_convert_octal, &flags[9]);
  _init_flag('u', &_convert_decimal, &flags[10]);
  _init_flag('p', &_ptr_to_hex, &flags[11]);
  _init_flag('f', &_double_decimal, &flags[12]);
}

int			my_printf(const char *format, ...)
{
  va_list		ap;
  unsigned int		printed;
  t_string		str;
  const char		*specifiers;
  int			idx;
  int			space;
  t_flag		flags[13];

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
	  specifiers = _find_flag(&str, &printed);
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
	  else
	    printed = flags[idx].fct(printed, ap);
	  str.idx += 1;
	}
      str.idx += 1;
    }
  va_end(ap);
  return (printed);
}
