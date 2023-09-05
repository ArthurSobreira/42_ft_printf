/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/09/05 16:02:26 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

void	test1(void)
{
	int	my_return;
	int	original_return;

	int	x = 1234;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("low hexa: %#x | upper hexa: %#X\n", x, x);
	original_return = printf("low hexa: %#x | upper hexa: %#X\n", x, x);

	freopen("/dev/tty", "w", stdout);

	if (my_return == original_return)
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
}

void	test2(void)
{
	int	my_return;
	int	original_return;

	int	x = 0;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("low hexa: %#####x | upper hexa: %###X\n", x, x);
	original_return = printf("low hexa: %##x | upper hexa: %##X\n", x, x);

	freopen("/dev/tty", "w", stdout);

	if (my_return == original_return)
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
}

void	test3(void)
{
	int	my_return;
	int	original_return;

	int	x = 4242;
	int	y = 123;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("value x: %+d | value y: %+i\n", x, y);
	original_return = printf("value x: %+d | value y: %+i\n", x, y);

	freopen("/dev/tty", "w", stdout);

	if (my_return == original_return)
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
}

void	test4(void)
{
	int	my_return;
	int	original_return;

	int	x = -4242;
	int	y = 0;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("value x: %+d | value y: %+i\n", x, y);
	original_return = printf("value x: %+d | value y: %+i\n", x, y);

	freopen("/dev/tty", "w", stdout);

	if (my_return == original_return)
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
}

void	test5(void)
{
	int	my_return;
	int	original_return;

	int	x = 4242;
	int	y = 123;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("value x: % d | value y: % i\n", x, y);
	original_return = printf("value x: % d | value y: % i\n", x, y);

	freopen("/dev/tty", "w", stdout);

	if (my_return == original_return)
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
}

void	test6(void)
{
	int	my_return;
	int	original_return;

	int	x = -4242;
	int	y = 0;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("value x: % d | value y: % i\n", x, y);
	original_return = printf("value x: % d | value y: % i\n", x, y);

	freopen("/dev/tty", "w", stdout);

	if (my_return == original_return)
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
}

int main(void)
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	return (0);
}
