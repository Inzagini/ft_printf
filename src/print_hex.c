/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:10:46 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 10:06:43 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	dec_2_hex(long nb, int *count, char *base)
{
	if (nb > 15)
		dec_2_hex(nb / 16, count, base);
	nb = nb % 16;
	*count += 1 ;
	if (write(1, &base[nb], 1) == -1)
		return (-1);
	return (1);
}

void	print_hex(int nb, char *base, int *count)
{
	int		len;
	long	tmp_nb;

	tmp_nb = (long) nb;
	len = 0;
	if (nb < 0)
		tmp_nb = 4294967296 + tmp_nb;
	if (dec_2_hex(tmp_nb, &len, base) == -1)
	{
		*count = -1;
		return ;
	}
	*count += len;
}
