/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:06:57 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 10:06:55 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

unsigned int	args_counter(char *str)
{
	unsigned int	count;
	unsigned int	index;
	int				mod;

	index = -1;
	mod = 0;
	count = 0;
	while (str[++index])
	{
		if (str[index] == '%' && !mod)
			mod = 1;
		else if (str[index] == '%' && mod)
			mod = 0;
		else if (is_modifier(str[index]) && mod)
		{
			count++;
			mod = 0;
		}
	}
	return (count);
}
