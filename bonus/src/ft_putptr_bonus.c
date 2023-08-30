/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:45:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/30 14:55:26 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putptr(unsigned long number, char *base)
{
	int	lenght;
	int	base_lenght;

	lenght = 0;
	base_lenght = ft_strlen(base);
	if (number == 0)
	{
		return (ft_putstr("(nil)"));
	}
	if (number >= (unsigned long)base_lenght)
	{
		lenght += ft_putptr((number / base_lenght), base);
	}
	else
		lenght += ft_putstr("0x");
	lenght += ft_putchar(base[number % base_lenght]);
	return (lenght);
}
