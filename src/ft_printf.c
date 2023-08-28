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

int	ft_check_format_specifier(va_list args, char cur_format);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	index;
	int		lenght;
	char	cur_format;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	index = 0;
	lenght = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			cur_format = format[index];
			lenght += ft_check_format_specifier(args, cur_format);
		}
		else
			lenght += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (lenght);
}

int	ft_check_format_specifier(va_list args, char cur_format)
{
	size_t	count;

	count = 0;
	if (cur_format == 'c')
		count += ft_putchar((char)va_arg(args, int));
	else if (cur_format == 's')
		count += ft_putstr(va_arg(args, char *));
	return (count);
}
