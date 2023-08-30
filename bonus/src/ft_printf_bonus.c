/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:13:26 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/30 14:54:59 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_check_format_specifier(va_list args, char current_format);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	index;
	char	current_format;
	int		lenght;

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
			current_format = format[index];
			lenght += ft_check_format_specifier(args, current_format);
		}
		else
			lenght += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (lenght);
}

static int	ft_check_format_specifier(va_list args, char current_format)
{
	size_t	count;

	count = 0;
	if (current_format == 'c')
		count += ft_putchar((char)va_arg(args, int));
	else if (current_format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (current_format == 'p')
		count += ft_putptr(va_arg(args, unsigned long), HEXA_LOW_BASE);
	else if (current_format == 'd' || current_format == 'i')
		count += ft_putnbr_base(va_arg(args, int), DECIMAL_BASE);
	else if (current_format == 'u')
		count += ft_putnbr_base(va_arg(args, unsigned int), DECIMAL_BASE);
	else if (current_format == 'x')
		count += ft_putnbr_base(va_arg(args, unsigned int), HEXA_LOW_BASE);
	else if (current_format == 'X')
		count += ft_putnbr_base(va_arg(args, unsigned int), HEXA_UP_BASE);
	else if (current_format == '%')
		count += ft_putchar('%');
	return (count);
}
