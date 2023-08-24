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

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	ft_printf("%d %s %c", 99, "bahhhh", 'v');
	printf("\n");
	ft_printf("%c %c", 'a', 'b');
	printf("\n");
	ft_printf("%s %s", "coisa", "baaa");
	printf("\n");
	ft_putstr("Fim dos testes :)\n");
	ft_putnbr_fd(12, 1);
	return (0);
}
