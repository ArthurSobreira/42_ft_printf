/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:09:59 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 11:46:57 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putnbr_base(long int number, char *base)
{
	int	length;
	int	base_lenght;

	length = 0;
	base_lenght = ft_strlen(base);
	if (number == -2147483648)
	{
		length += ft_putchar('-');
		length += ft_putchar('2');
		number = 147483648;
	}
	if (number < 0)
	{
		length += ft_putchar('-');
		number *= -1;
	}
	if (number >= base_lenght)
	{
		length += ft_putnbr_base((number / base_lenght), base);
	}
	length += ft_putchar(base[number % base_lenght]);
	return (length);
}
