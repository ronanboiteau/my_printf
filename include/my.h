#ifndef MY_H_
# define MY_H_

# include "my_macro.h"
# include "my_typedef.h"

char	*get_next_line(int const fd);
int	match(char *str1, char *str2);
int	my_char_isprintable(const char letter);
int	my_dprintf(int fd, const char *format, ...);
void	my_exit(int exit_code, const char *format, ...);
int	my_find_prime_sup(int nbr);
int	my_is_prime(const int nbr);
char	*my_itoa(int nbr);
int	my_max_int_tab(const int *tab, const t_uint size);
int	my_min_int_tab(const int *tab, const t_uint size);
int	my_power(const int nbr, int power);
int	my_printf(const char *format, ...);
char	*my_revstr(char *str);
int	my_strcmp(const char *str1, const char *str2);
char	*my_strdup(const char *src);
int	my_strlen(const char *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, const char *src, int nbr);
int	my_strncmp(const char *str1, const char *str2, t_uint nbr);
char	*my_strncpy(char *dest, const char *src, t_uint nbr);
char	*my_strstr(char *str, const char *to_find);
char	*my_strupcase(char *str);
char	*my_uitoa(t_uint nbr);
int	nmatch(char *str1, char *str2);

#endif /* !MY_H_ */
