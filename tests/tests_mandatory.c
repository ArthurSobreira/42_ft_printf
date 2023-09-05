/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_mandatory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/09/05 15:03:31 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test1(void)
{
	int	my_return;
	int	original_return;

	char	c = 'c';
	char	v = 'v';
	char	b = 'b';

	my_return = ft_printf("Muitas %c %c %c Coisas\n", c, v, b);
	printf("my return: %d\n\n", my_return);

	original_return = printf("Muitas %c %c %c Coisas\n", c, v, b);
	printf("original return: %d\n", original_return);
}

void	test2(void)
{
	int	my_return;
	int	original_return;

	char	*str1 = "boas";
	char	*str2 = "legais";

	my_return = ft_printf("Muitas %s %s %s Coisas\n", str1, str2, str1);
	printf("my return: %d\n\n", my_return);

	original_return = printf("Muitas %s %s %s Coisas\n", str1, str2, str1);
	printf("original return: %d\n", original_return);
}

void	test3(void)
{
	int	my_return;
	int	original_return;

	char	x = 'X';
	char	*str1 = "Men";

	my_return = ft_printf("%c-%s Revolution\n", x, str1);
	printf("my return: %d\n\n", my_return);

	original_return = printf("%c-%s Revolution\n", x, str1);
	printf("original return: %d\n", original_return);
}

void	test4(void)
{
	int	my_return;
	int	original_return;

	my_return = ft_printf("%% %% %% %%\n");
	printf("my return: %d\n\n", my_return);

	original_return = printf("%% %% %% %%\n");
	printf("original return: %d\n", original_return);
}

void	test5(void)
{
	int	my_return;
	int	original_return;

	int	x = 42;
	int	y = 21;

	my_return = ft_printf("x: %d, y: %d\n", x, y);
	printf("my return: %d\n\n", my_return);

	original_return = printf("x: %d, y: %d\n", x, y);
	printf("original return: %d\n", original_return);
}

void	test6(void)
{
	int	my_return;
	int	original_return;

	int	x = 180;
	int	y = 240;

	my_return = ft_printf("x: %i, y: %i\n", x, y);
	printf("my return: %d\n\n", my_return);

	original_return = printf("x: %i, y: %i\n", x, y);
	printf("original return: %d\n", original_return);
}

void	test7(void)
{
	int	my_return;
	int	original_return;

	int	x = 1234;

	my_return = ft_printf("low hexa: %x | upper hexa: %X\n", x, x);
	printf("my return: %d\n\n", my_return);

	original_return = printf("low hexa: %x | upper hexa: %X\n", x, x);
	printf("original return: %d\n", original_return);
}

int main(void)
{
	printf("\n=============== Test 01 ===============\n");
	test1();
	printf("\n=============== Test 02 ===============\n");
	test2();
	printf("\n=============== Test 03 ===============\n");
	test3();
	printf("\n=============== Test 04 ===============\n");
	test4();
	printf("\n=============== Test 05 ===============\n");
	test5();
	printf("\n=============== Test 06 ===============\n");
	test6();
	printf("\n=============== Test 07 ===============\n");
	test7();
	return (0);
}
