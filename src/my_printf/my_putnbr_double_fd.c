/*
** my_putnbr_double_fd.c for my_putnbr_double_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Nov 14 08:00:06 2015 Ronan Boiteau
** Last update Sat Nov 14 08:18:43 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"

static unsigned int	_put_decimal_part(int fd,
					  long long int nbr,
					  long long count)
{
  unsigned int		printed;

  printed = 0;
  if (nbr >= 10)
    {
      printed += _put_decimal_part(fd, nbr / 10, count - 1);
      if (count > 0)
	{
	  my_putchar_fd(fd, nbr % 10 + '0');
	  printed++;
	}
    }
  else if (count > 0)
    printed += my_putchar_fd(fd, nbr + '0');
  return (printed);
}

static unsigned int	_put_whole_part(int fd,
					long long int nbr,
					long long count)
{
  unsigned int		printed;

  printed = 0;
  if (nbr >= 10)
    {
      printed += _put_whole_part(fd, nbr / 10, count - 1);
      if (count <= 0)
	{
	  my_putchar_fd(fd, nbr % 10 + '0');
	  printed++;
	}
    }
  else if (count <= 0)
    printed += my_putchar_fd(fd, nbr + '0');
  return (printed);
}

static long long	_divide_nbr(double nbr, int just_count)
{
  long long		count;

  count = 0;
  while ((long long int)nbr != (double)nbr)
    {
      nbr *= 10;
      count += 1;
    }
  if (just_count == TRUE)
    return (count);
  else
    return (nbr);
}

static unsigned int	_cut_or_fill_zeroes(unsigned int printed_dec)
{
  long long		tmp;

  while (printed_dec > 6)
    {
      my_putchar('\b');
      printed_dec -= 1;
    }
  tmp = 0;
  while (printed_dec < 6)
    {
      printed_dec += my_putchar('0');
      tmp += 1;
    }
  return (printed_dec);
}

unsigned int		my_putnbr_double_fd(int fd, double nbr)
{
  unsigned int		printed;
  unsigned int		printed_tmp;

  printed = 0;
  if (nbr < 0)
    {
      printed += my_putchar_fd(fd, '-');
      nbr = nbr * -1;
    }
  printed_tmp = _put_whole_part(fd, (long long)_divide_nbr(nbr, FALSE),
				_divide_nbr(nbr, TRUE));
  if (printed_tmp == 0)
    printed_tmp += my_putchar('0');
  printed += printed_tmp;
  printed += my_putchar_fd(fd, '.');
  printed_tmp = _put_decimal_part(fd, (long long)_divide_nbr(nbr, FALSE),
				  _divide_nbr(nbr, TRUE));
  printed += _cut_or_fill_zeroes(printed_tmp);
  return (printed);
}
