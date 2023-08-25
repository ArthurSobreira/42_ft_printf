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

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	index;;
	int		lenght;

	va_start(args, format);
	index = 0;
	lenght = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '%')
			{
				lenght++;
				return (0);	
			}
		}
	}
	va_end(args);
	return (lenght);
}
