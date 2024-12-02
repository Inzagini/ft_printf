/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:41:59 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 09:48:44 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	print_int(long nb, int *count)
{
	if (nb < 0)
	{
		print_char('-', count);
		nb = -nb;
	}
	if (nb > 9)
		print_int(nb / 10, count);
	nb = (nb % 10) + 48;
	print_char(nb, count);
	return ;
}
