/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:09:59 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/28 19:47:29 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long int number, char *base)
{
	int		lenght;
	int		base_lenght;

	lenght = 0;
	base_lenght = ft_strlen(base);
	if (number == -2147483648)
	{
		lenght += ft_putchar('-');
		lenght += ft_putchar('2');
		number = 147483648;
	}
	if (number < 0)
	{
		lenght += ft_putchar('-');
		number *= -1;
	}
	if (number >= base_lenght)
	{
		lenght += ft_putnbr_base(number / base_lenght, base);
	}
	lenght += ft_putchar(base[number % base_lenght]);
	return (lenght);
}
