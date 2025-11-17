/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:16:59 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/17 10:38:29 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	compare(char c, va_list list)
{
	if (c == 's')
		return (print_string(va_arg(list, char *)));
	else if (c == 'u')
		return (print_unsigned(va_arg(list, unsigned int)));
	else if (c == 'd')
		return (print_decimal(va_arg(list, int)));
	else if (c == 'i')
		return (print_integer(va_arg(list, int)));
	else if (c == 'x')
		return (print_lower_hexadecimal(va_arg(list, unsigned int)));
	else if (c == 'X')
		return (print_upper_hexadecimal(va_arg(list, unsigned int)));
	else if (c == 'p')
		return (print_pointer(va_arg(list, void *)));
	else if (c == 'c')
		return (print_character(va_arg(list, int)));
	else if (c == '%')
		return (write(1, "%%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		count;
	int		w;

	if (write(1, NULL, 0) < 0)
		return (-1);
	count = 0;
	w = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
			count += compare(*(++str), list);
		else
			count += write(1, str, 1);
		count += w;
		str++;
	}
	va_end(list);
	return (count);
}
