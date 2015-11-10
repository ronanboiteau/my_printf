/*
** my.h for libmy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Oct  8 10:33:26 2015 Ronan Boiteau
** Last update Tue Nov 10 17:07:31 2015 Ronan Boiteau
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

int		match(const char *str1, const char *str2);
int		my_char_isalpha(char letter);
int		my_char_islower(char letter);
int		my_char_isnum(char letter);
int		my_char_isprintable(char letter);
int		my_char_isupper(char letter);
int		my_find_prime_sup(int nbr);
int		my_getnbr(const char *str);
int		my_isneg(int nbr);
int		my_is_prime(int nbr);
int		my_max_int_tab(int *tab, unsigned int size);
int		my_min_int_tab(int *tab, unsigned int size);
int		my_power(int nbr, int power);
unsigned int	my_putchar(char letter);
unsigned int	my_putchar_fd(int fd, char letter);
unsigned int	my_putnbr_base(unsigned int nbr, const char *base);
unsigned int	my_putnbr_base_ull(unsigned long long nbr, const char *base);
unsigned int	my_put_nbr(int nbr);
unsigned int	my_put_nbr_fd(int fd, int nbr);
unsigned int	my_putstr(const char *str);
unsigned int	my_putstr_fd(int fd, const char *str);
char		*my_revstr(char *str);
int		my_showstr(const char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_square_root(int nbr);
char		*my_strcapitalize(char *str);
char		*my_strcat(char *dest, const char *src);
int		my_strcmp(const char *str1, const char *str2);
char		*my_strcpy(char *dest, const char *src);
char		*my_strdup(const char *src);
int		my_str_isalpha(const char *str);
int		my_str_islower(const char *str);
int		my_str_isnum(const char *str);
int		my_str_isprintable(const char *str);
int		my_str_isupper(const char *str);
int		my_strlen(const char *str);
char		*my_strlowcase(char *str);
char		*my_strncat(char *dest, const char *src, unsigned int nbr);
int		my_strncmp(const char *str1,
			   const char *str2,
			   unsigned int nbr);
char		*my_strncpy(char *dest, const char *src, unsigned int nbr);
char		*my_strstr(char *str, const char *to_find);
char		*my_strupcase(char *str);
void		my_swap(int *ptr_a, int *ptr_b);
int		nmatch(const char *str1, const char *str2);

#endif /* !MY_H_ */
