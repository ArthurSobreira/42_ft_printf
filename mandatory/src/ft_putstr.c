/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:09:06 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 11:48:36 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	length;

	if (str == NULL)
	{
		return (ft_putstr("(null)"));
	}
	length = ft_strlen(str);
	write(1, str, length);
	return (length);
}
