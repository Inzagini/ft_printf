/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quannguy <quannguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:10:39 by quannguy          #+#    #+#             */
/*   Updated: 2024/11/18 10:09:01 by quannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (is_modifier(*(str + 1)))
				mod_caller(*(++str), args, &count);
		}
		else
		{
			if (write(1, str, 1) == -1)
				return (-1);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}
//#include <limits.h>
//#include <stdio.h>
//int	main(void)
//{
//	//unsigned int nb1 =(unsigned int) 4294967295;
//	//unsigned int nb2 =(unsigned int) -4294967296;
//	//ft_printf("%c\n %s\n %d\n %u\n %u\n %i\n %x\n %X\n %%\n %p\n",
//	// 'a',"Test", INT_MIN, nb1, nb2, 0xf, 1000, 1000, &nb1);
//	printf("printf | %p\n", NULL);
//	ft_printf("ft_printf | %p\n", NULL);
//	//printf("printf | %p %p\n", &nb1, &nb2);
//	//ft_printf("ft_printf | %p %p\n", &nb1, &nb2);
//	return (1);
//}
