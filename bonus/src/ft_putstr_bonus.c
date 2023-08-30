/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:09:06 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/30 14:55:30 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putstr(char *str)
{
	int	lenght;

	if (str == NULL)
	{
		return (ft_putstr("(null)"));
	}
	lenght = ft_strlen(str);
	write(1, str, lenght);
	return (lenght);
}
