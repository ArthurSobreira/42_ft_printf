/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:09:06 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/28 19:09:17 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
