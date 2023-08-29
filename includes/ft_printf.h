/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsobrei <arsobrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:30:56 by arsobrei          #+#    #+#             */
/*   Updated: 2023/08/28 20:04:53 by arsobrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// Include lib header
# include "libft.h"

// Macros Definitions
# define DECIMAL_BASE "0123456789"

// Functions Prototypes
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr_base(long int number, char *base);
int	ft_putstr(char *str);

#endif