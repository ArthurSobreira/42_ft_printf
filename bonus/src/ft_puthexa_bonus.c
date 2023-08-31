/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:16:54 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 11:10:47 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_puthexa(long int number, char *base, char flag)
{
	int	lenght;

	lenght = 0;
	if (flag == '#')
	{
		lenght += ft_putstr("0x");
	}
	lenght += ft_putnbr_base(number, base);
	return (lenght);
}
