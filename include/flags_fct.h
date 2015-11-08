/*
** flags_fct.h for my_printf in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Nov  8 02:39:58 2015 Ronan Boiteau
** Last update Sun Nov  8 02:47:18 2015 Ronan Boiteau
*/

#ifndef FLAGS_FCT_H_
# define FLAGS_FCT_H_

unsigned int	_ptr_to_hex(unsigned int printed, ...);
unsigned int	_print_char(unsigned int printed, ...);
unsigned int	_print_str(unsigned int printed, ...);
unsigned int	_str_non_printable(unsigned int printed, ...);
unsigned int	_print_int(unsigned int printed, ...);
unsigned int	_convert_binary(unsigned int printed, ...);
unsigned int	_convert_decimal(unsigned int printed, ...);
unsigned int	_convert_hex_lowcase(unsigned int printed, ...);
unsigned int	_convert_hex_upcase(unsigned int printed, ...);
unsigned int	_convert_octal(unsigned int printed, ...);

#endif /* !FLAGS_FCT_H_ */
