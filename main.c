#include "my.h"
#include <stdio.h> /* REMOVE THAT SHIT!!!! */

int		my_printf(const char *format, ...);

int		main(void)
{
  int		i_printed;
  int		he_printed;
  /* int		chars_me; */
  /* int		chars_him; */

  i_printed = 0;
  he_printed = 0;
  i_printed = my_printf("%e\n", 42.53);
  he_printed = printf("%e\n", 42.53);
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

/* Handle NULL value for EVERY flag */

/* Buffer overflows? */

/* Makefile compile pas sans dossiers my/ ???? */

/* varargs vraiment utiles dans les fonctions flags ? */

/* Bonus: handle specifiers:
** Website: cpp reference printf
** %0500d
** %10s
** %-10s
** %*s
*/
