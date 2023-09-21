/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_mandatory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:29:11 by arsobrei          #+#    #+#             */
/*   Updated: 2023/09/21 12:05:30 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

void	test_char(char c1, char c2, char c3, char c4, char c5)
{
	int		my_return;
	int		original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %c %c %c %c %c\n", c1, c2, c3, c4, c5);
	original_return = printf("testing %c %c %c %c %c\n", c1, c2, c3, c4, c5);

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

void	test_string(char *s1, char *s2, char *s3, char *s4, char *s5)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %s %s %s %s %s testing\n", s1, s2, s3, s4, s5);
	original_return = printf("testing %s %s %s %s %s testing\n", s1, s2, s3, s4, s5);

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

void	test_mix_char_string(char c1, char c2, char c3, char *s1, char *s2, char *s3)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %c %s %c %s %c %s\n", c1, s1, c2, s2, c3, s3);
	original_return = printf("testing %c %s %c %s %c %s\n", c1, s1, c2, s2, c3, s3);

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

void	test_percent(void)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %% %% %% %% %% %%\n");
	original_return = printf("testing %% %% %% %% %% %%\n");

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

void	test_dec_number(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;
	
	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);

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

void	test_int_number(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %i %i %i %i %i %i\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %i %i %i %i %i %i\n", n1, n2, n3, n4, n5, n6);

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

void	test_hex_number(int n1, int n2, int n3, short n4, unsigned int n5, unsigned int n6)
{
	int	my_return;
	int	original_return;

	freopen("output.txt", "w", stdout);

	my_return = ft_printf("testing %x %X %x %X %x %X\n", n1, n2, n3, n4, n5, n6);
	original_return = printf("testing %x %X %x %X %x %X\n", n1, n2, n3, n4, n5, n6);

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
	test_char('a', 'b', '+', ' ', '0');
	test_string("Hello", "World", "0123456789", "*-/^?+", "  ");
	test_mix_char_string('a', '9', ' ', "*-/^?+", "Hello World", "0123456789");
	test_percent();
	test_dec_number(1234, -1234, 0, -0, 99999, -999999);
	test_int_number(1234, -1234, 0, -0, 99999, -999999);
	test_hex_number(1234, -1234, 0, -0, 99999, -999999);
	return (0);
}
