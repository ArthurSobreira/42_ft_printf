/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_mandatory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/09/06 10:58:48 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

void	test1(void)
{
	int		my_return;
	int		original_return;

	char	c = 'c';
	char	v = 'v';
	char	b = 'b';

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("Muitas %c %c %c Coisas\n", c, v, b);
	original_return = printf("Muitas %c %c %c Coisas\n", c, v, b);

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

void	test2(void)
{
	int	my_return;
	int	original_return;

	char	*str1 = "boas";
	char	*str2 = "legais";

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("Muitas %s %s %s Coisas\n", str1, str2, str1);
	original_return = printf("Muitas %s %s %s Coisas\n", str1, str2, str1);

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

void	test3(void)
{
	int	my_return;
	int	original_return;

	char	x = 'X';
	char	*str1 = "Men";

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("%c-%s Revolution\n", x, str1);
	original_return = printf("%c-%s Revolution\n", x, str1);

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

void	test4(void)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("%% %% %% %%\n");
	original_return = printf("%% %% %% %%\n");

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d  | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d  | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

void	test5(void)
{
	int	my_return;
	int	original_return;

	int	x = 42;
	int	y = 21;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("x: %d, y: %d\n", x, y);
	original_return = printf("x: %d, y: %d\n", x, y);

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

void	test6(void)
{
	int	my_return;
	int	original_return;

	int	x = 180;
	int	y = 240;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("x: %i, y: %i\n", x, y);
	original_return = printf("x: %i, y: %i\n", x, y);

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

void	test7(void)
{
	int	my_return;
	int	original_return;

	int	x = 1234;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("low hexa: %x | upper hexa: %X\n", x, x);
	original_return = printf("low hexa: %x | upper hexa: %X\n", x, x);

	freopen("/dev/tty", "w", stdout);

	// Print Comparison
	int	file_descriptor = open("output.txt", O_RDONLY);

	char	*my_printf;
	char	*original_printf;
	
	my_printf = get_next_line(file_descriptor);
	original_printf = get_next_line(file_descriptor);

	if ((my_return == original_return) && (strncmp(my_printf, original_printf, 20) == 0))
	{
		printf("\033[32m[Success]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	else
	{
		printf("\033[31m[Fail]\033[0m ");
		printf("Expected: %d | Result: %d\n", my_return, original_return);
	}
	free(my_printf);
	free(original_printf);
}

int main(void)
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	return (0);
}
