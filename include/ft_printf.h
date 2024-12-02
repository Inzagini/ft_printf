/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:33:48 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 09:49:05 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define BASE_HEX_LOW "0123456789abcdef"
# define BASE_HEX_UP "0123456789ABCDEF"

int				ft_printf(const char *str, ...);
int				is_modifier(int c);
int				is_flag(int c);
int				is_next_mod(char *str);
unsigned int	args_counter(char *str);
void			mod_caller(char c, va_list args, int *count);
void			print_char(char c, int *count);
void			print_str(char *str, int *count);
void			print_int(long nb, int *count);
void			print_unsigned_int(unsigned int nb, int *count);
void			print_hex(int nb, char *condi, int *count);
void			print_address(void *ptr, int *count);

#endif
