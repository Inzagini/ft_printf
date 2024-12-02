/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:12:35 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 09:59:25 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_str(char *str, int *count)
{
	int	len;

	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			*count = -1;
		else
			*count += 6;
		return ;
	}
	len = ft_strlen(str);
	if (write(1, str, len) == -1)
		*count = -1;
	*count += len;
}
