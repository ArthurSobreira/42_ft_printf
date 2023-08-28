/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/24 15:22:30 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

void	test1(void)
{
	int	my_return;
	int	original_return;

	char	c = 'c';
	char	v = 'v';
	char	b = 'b';

	my_return = ft_printf("Muitas %c %c %c Coisas\n", c, v, b);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("Muitas %c %c %c Coisas\n", c, v, b);  // Original
	printf("original return: %d\n", original_return);
}

void	test2(void)
{
	int	my_return;
	int	original_return;

	char	*str1 = "boas";
	char	*str2 = "legais";

	my_return = ft_printf("Muitas %s %s %s Coisas\n", str1, str2, str1);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("Muitas %s %s %s Coisas\n", str1, str2, str1);  // Original
	printf("original return: %d\n", original_return);
}

void	test3(void)
{
	int	my_return;
	int	original_return;

	char	x = 'X';
	char	*str1 = "Men";

	my_return = ft_printf("%c-%s Revolution\n", x, str1);  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("%c-%s Revolution\n", x, str1);  // Original
	printf("original return: %d\n", original_return);
}

void	test4(void)
{
	int	my_return;
	int	original_return;

	my_return = ft_printf("%% %% %% %%\n");  // My Function
	printf("my return: %d\n\n", my_return);

	original_return = printf("%% %% %% %%\n");  // Original
	printf("original return: %d\n", original_return);
}

int main(void)
{
	printf("========== Test 01 ==========\n");
	test1();
	printf("\n========== Test 02 ==========\n");
	test2();
	printf("\n========== Test 03 ==========\n");
	test3();
	printf("\n========== Test 04 ==========\n");
	test4();
	return (0);
}
