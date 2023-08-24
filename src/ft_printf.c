/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:13:26 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/24 15:21:25 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char 	*s;
	int		d;
	char	c;

	va_start(args, format);
	while (*format != '\0')
	{
		switch (*format++)
		{
		case 's':
			s = va_arg(args, char *);
			printf("the arg is a string: %s\n", s);
			break;
		case 'd':
			d = va_arg(args, int);
			printf("the arg is a int: %d\n", d);
			break;
		case 'c':
			c = (char)va_arg(args, int);
			printf("the arg is a char: %c\n", c);
			break;
		}
	}
	va_end(args);
	return (0);
}
