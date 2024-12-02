/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:40:20 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 10:06:23 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	is_modifier(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (c);
	return (0);
}

void	mod_caller(char c, va_list args, int *count)
{
	if (c == 'c')
		print_char(va_arg(args, int), count);
	else if (c == 's')
		print_str(va_arg(args, char *), count);
	else if (c == 'd')
		print_int(va_arg(args, int), count);
	else if (c == 'u')
		print_unsigned_int(va_arg(args, unsigned int), count);
	else if (c == 'i')
		print_int(va_arg(args, int), count);
	else if (c == 'x')
		print_hex(va_arg(args, int), BASE_HEX_LOW, count);
	else if (c == 'X')
		print_hex(va_arg(args, int), BASE_HEX_UP, count);
	else if (c == '%')
		print_char('%', count);
	else if (c == 'p')
		print_address(va_arg(args, void *), count);
}
