/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:45:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 11:47:06 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putptr(unsigned long number, char *base)
{
	int	length;
	int	base_length;

	length = 0;
	base_length = ft_strlen(base);
	if (number == 0)
	{
		return (ft_putstr("(nil)"));
	}
	if (number >= (unsigned long)base_length)
	{
		length += ft_putptr((number / base_length), base);
	}
	else
		length += ft_putstr("0x");
	length += ft_putchar(base[number % base_length]);
	return (length);
}
