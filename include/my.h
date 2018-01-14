#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

#include "my_macro.h"
#include "my_typedef.h"

int	my_dprintf(int fd, const char *format, ...);
void	my_exit(int exit_code, const char *format, ...);
int	my_printf(const char *format, ...);

#endif /* !MY_PRINTF_H_ */
