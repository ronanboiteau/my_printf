/*
** my_putnbr_double.c for my_putnbr_double.c in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Fri Nov 13 22:12:45 2015 Ronan Boiteau
** Last update Sat Nov 14 05:14:08 2015 Ronan Boiteau
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

unsigned int		my_putnbr_double_fd(int fd, double nbr)
{
  unsigned int		printed;
  unsigned int		printed_tmp;
  long long		tmp;

  printed = 0;
  if (nbr < 0)
    {
      my_putchar_fd(fd, '\b');
      my_putchar_fd(fd, '-');
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
  while (printed_tmp > 6)
    {
      my_putchar('\b');
      printed_tmp -= 1;
    }
  tmp = 0;
  while (printed_tmp < 6)
    {
      printed_tmp += my_putchar('0');
      tmp += 1;
    }
  printed += printed_tmp;
  return (printed);
}

unsigned int	my_putnbr_double(double nbr)
{
  return (my_putnbr_double_fd(1, nbr));
}
