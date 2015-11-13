#include "my.h"
#include <stdio.h>

int		my_printf(const char *format, ...);

int		main(void)
{
  int		i_printed;
  int		he_printed;
  int		chars_me;
  int		chars_him;

  i_printed = 0;
  he_printed = 0;
  i_printed = my_printf("foo: %f\n", -2353334.13234);
  he_printed = printf("foo: %f\n", -2353334.13234);
  my_putstr("my_printf: ");
  my_put_nbr(i_printed);
  /* my_putstr(" - "); */
  /* my_put_nbr(chars_me); */
  my_putstr("\nprintf:    ");
  my_put_nbr(he_printed);
  /* my_putstr(" - "); */
  /* my_put_nbr(chars_him); */
  my_putstr("\n");
  return (EXIT_SUCCESS);
}

/* HANDLE THIS */
/* NULL value for EVERY flag */

/* Makefile compile pas sans dossiers my/ ???? */

/* Bonus: handle specifiers:
** Website: cpp reference printf
** %0500d
** %10s
** %-10s
** %*s
*/
