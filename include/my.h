/*
** my.h for libmy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Oct  8 10:33:26 2015 Ronan Boiteau
** Last update Sat Nov  7 15:04:41 2015 Ronan Boiteau
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

int		match(char *, char *);
int		my_char_isalpha(char);
int		my_char_islower(char);
int		my_char_isprintable(char);
int		my_char_isnum(char);
int		my_char_isupper(char);
int		my_find_prime_sup(int);
int		my_getnbr(char *);
int		my_is_prime(int);
void		my_isneg(int);
int		my_max_int_tab(int *, int);
int		my_min_int_tab(int *, int);
int		my_power_rec(int, int);
unsigned int	my_put_nbr(int);
unsigned int	my_put_nbr_fd(int, int);
unsigned int	my_putchar(char);
unsigned int	my_putchar_fd(int, char);
unsigned int	my_putnbr_base(unsigned int, char *);
unsigned int	my_putstr(const char *);
unsigned int	my_putstr_fd(int, const char *);
char		*my_revstr(char *);
int		my_showstr(char *);
void		my_sort_int_tab(int *, int);
int		my_square_root(int);
int		my_str_isalpha(char *);
int		my_str_islower(char *);
int		my_str_isprintable(char *);
int		my_str_isnum(char *);
int		my_str_isupper(char *);
char		*my_strcapitalize(char *);
char		*my_strcat(char *, char *);
int		my_strcmp(char *, char *);
char		*my_strcpy(char *, char *);
char		*my_strdup(char *);
int		my_strlen(const char *);
char		*my_strlowcase(char *);
char		*my_strncat(char *, char *, int);
int		my_strncmp(char *, char *, int);
char		*my_strncpy(char *, char *, int);
char		*my_strstr(char *, char *);
char		*my_strupcase(char *);
void		my_swap(int *, int *);
int		nmatch(char *, char *);

#endif /* !MY_H_ */
