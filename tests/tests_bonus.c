/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/09/21 15:12:15 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include "utils/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

static	void	test1_sharp_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6);
static	void	test2_sharp_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6);
static	void	test1_plus_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6);
static	void	test2_plus_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6);

int main(void)
{
	test1_sharp_flag(1234, -1234, 0, -0, 99999, -999999);
	test2_sharp_flag(1234, -1234, 0, -0, 99999, -999999);
	test1_plus_flag(1234, -1234, 0, -0, 99999, -999999);
	test2_plus_flag(1234, -1234, 0, -0, 99999, -999999);
	// test5();
	// test6();
	return (0);
}

static	void	test1_sharp_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %#x %#X %#x %#X %#x %#X\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %#x %#X %#x %#X %#x %#X\n", n1, n2, n3, n4, n5, n6);

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

static	void	test2_sharp_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %###x %###X %##x %##X %#x %#X\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %###x %###X %##x %##X %#x %#X\n", n1, n2, n3, n4, n5, n6);

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

static	void	test1_plus_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %+d %++d %+++d %++++d %d %d\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %+d %++d %+++d %++++d %d %d\n", n1, n2, n3, n4, n5, n6);

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

static	void	test2_plus_flag(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %+i %++i %+++i %++++i %i %i\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %+i %++i %+++i %++++i %i %i\n", n1, n2, n3, n4, n5, n6);

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

	int	x = -4242;
	int	y = 0;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("value x: % d | value y: % i\n", x, y);
	original_return = printf("value x: % d | value y: % i\n", x, y);

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
