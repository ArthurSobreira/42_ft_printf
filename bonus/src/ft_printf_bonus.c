/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:13:26 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/30 20:08:20 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h> // DELETA ISSO

static int	ft_check_format_specifier(va_list args, char current_format, char flag);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	index;
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
			while (format[index] == '#' || format[index] == '+' || format[index] == ' ')
				index++;
			lenght += ft_check_format_specifier(args, format[index], format[index - 1]);
		}
		else
			lenght += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (lenght);
}

static int	ft_check_format_specifier(va_list args, char current_format, char flag)
{
	int	count;

	count = 0;
	(void)flag;
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
		count += ft_puthexa_low(va_arg(args, unsigned int), flag);
		
	else if (current_format == 'X')
		count += ft_putnbr_base(va_arg(args, unsigned int), HEXA_UP_BASE);

		
	else if (current_format == '%')
		count += ft_putchar('%');
	return (count);
}
