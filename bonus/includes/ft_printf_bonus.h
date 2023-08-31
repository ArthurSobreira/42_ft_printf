/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:30:56 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/31 15:22:09 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>

// Include lib header
# include "../../libft/includes/libft.h"

// Macros Definitions
# define DECIMAL_BASE "0123456789"
# define HEXA_LOW_BASE "0123456789abcdef"
# define HEXA_UP_BASE "0123456789ABCDEF"

// Functions Prototypes
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_puthexa(long int number, char *base, char flag);
int	ft_putnbr_base(long int number, char *base);
int	ft_putplus_space(long int number, char *base, char flag);
int	ft_putptr(unsigned long number, char *base);
int	ft_putstr(char *str);

#endif