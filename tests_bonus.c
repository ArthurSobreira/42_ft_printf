/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 14:26:35 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

void	test1(void)
{
	int	my_return;
	int	original_return;

	int	x = 1234;

	my_return = ft_printf("low hexa: %#x | upper hexa: %#X\n", x, x);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("low hexa: %#x | upper hexa: %#X\n", x, x);  // Original
	printf("original return: %d\n", original_return);
}

void	test2(void)
{
	int	my_return;
	int	original_return;

	int	x = 0;

	my_return = ft_printf("low hexa: %#####x | upper hexa: %###X\n", x, x);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("low hexa: %##x | upper hexa: %##X\n", x, x);  // Original
	printf("original return: %d\n", original_return);
}

int main(void)
{
	printf("=============== Test 01 ===============\n");
	test1();
	printf("=============== Test 02 ===============\n");
	test2();
	return (0);
}
