/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:16:54 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/30 20:06:02 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

int	ft_puthexa_low(long int number, char flag)
{
	int	lenght;

	lenght = 0;
	if (flag == '#')
	{
		lenght += ft_putstr("0x");
	}
	lenght += ft_putnbr_base(number, HEXA_LOW_BASE);
	return (lenght);
}
