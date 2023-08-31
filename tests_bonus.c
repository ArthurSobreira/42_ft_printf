/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 15:44:58 by arsobrei         ###   ########.fr       */
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

void	test3(void)
{
	int	my_return;
	int	original_return;

	int	x = 4242;
	int	y = 123;

	my_return = ft_printf("value x: %+d | value y: %+i\n", x, y);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("value x: %+d | value y: %+i\n", x, y);  // Original
	printf("original return: %d\n", original_return);
}

void	test4(void)
{
	int	my_return;
	int	original_return;

	int	x = -4242;
	int	y = 0;

	my_return = ft_printf("value x: %+d | value y: %+i\n", x, y);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("value x: %+d | value y: %+i\n", x, y);  // Original
	printf("original return: %d\n", original_return);
}

void	test5(void)
{
	int	my_return;
	int	original_return;

	int	x = 4242;
	int	y = 123;

	my_return = ft_printf("value x: % d | value y: % i\n", x, y);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("value x: % d | value y: % i\n", x, y);  // Original
	printf("original return: %d\n", original_return);
}

void	test6(void)
{
	int	my_return;
	int	original_return;

	int	x = -4242;
	int	y = 0;

	my_return = ft_printf("value x: % d | value y: % i\n", x, y);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("value x: % d | value y: % i\n", x, y);  // Original
	printf("original return: %d\n", original_return);
}

int main(void)
{
	printf("=============== Test 01 ===============\n");
	test1();
	printf("=============== Test 02 ===============\n");
	test2();
	printf("=============== Test 03 ===============\n");
	test3();
	printf("=============== Test 04 ===============\n");
	test4();
	printf("=============== Test 05 ===============\n");
	test5();
	printf("=============== Test 06 ===============\n");
	test6();
	return (0);
}
