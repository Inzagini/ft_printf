/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usigned_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:14 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 09:48:51 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	print_unsigned_int(unsigned int nb, int *count)
{
	char	*array;
	int		len;

	if (nb < 0)
		nb = 4294967296 + nb;
	if (nb > 9)
		print_unsigned_int(nb / 10, count);
	nb = (nb % 10) + 48;
	print_char(nb, count);
	return ;
}
