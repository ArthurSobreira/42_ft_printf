/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putplus_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:38:05 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 14:51:25 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putplus(long int number, char *base, char flag)
{
	int	length;

	length = 0;
	if ((flag == '+') && (number >= 0))
	{
		length += ft_putchar('+');
	}
	length += ft_putnbr_base(number, base);
	return (length);
}
