/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:13:26 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/23 11:24:24 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_printf(const char *, ...)
{
	return (0);
}




int	main(void)
{
	int	amount;
	char	*string;

	string = "World";

	amount = printf("Hello %s", string);
	printf("\namount: %d\n", amount);
	return (0);	
}
