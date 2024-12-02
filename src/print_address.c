/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:39:24 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 10:06:33 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	print_address(void *ptr, int *count)
{
	unsigned long	address;

	if (!ptr)
	{
		if (write(1, "(nil)", 5) == -1)
			*count = -1;
		else
			*count += 5;
		return ;
	}
	address = (unsigned long) ptr;
	if (address > 15)
		print_address((void *)(address / 16), count);
	if (address < 16)
		print_str("0x", count);
	if (address == 0)
		print_char('0', count);
	print_char(BASE_HEX_LOW[address % 16], count);
	return ;
}
