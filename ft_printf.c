/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:16:59 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/15 15:21:33 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	compare(char c, va_list list)
{
	if (c == 's')
		return (print_string(va_arg(list, char *)));
	else if (c == 'u')
		return (print_unsigned(va_arg(list, unsigned)));
	else if (c == 'd')
		return (print_decimal(va_arg(list, int)));
	else if (c == 'i')
		return (print_integer(va_arg(list, int)));
	else if (c == 'x')
		return (print_lower_hexadecimal(va_arg(list, unsigned long long)));
	else if (c == 'X')
		return (print_upper_hexadecimal(va_arg(list, unsigned long long)));
	else if (c == 'p')
		return (print_pointer(va_arg(list, void *)));
	else if (c == 'c')
	{
		printf("dkhlt\n");
		return (print_character(va_arg(list, int)));
	}
	else if (c == '%')
		return (write(1, "%%", 1));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list list;
	va_start(list, str);
	int	index;
	int	count;
	
	index = 0;
	count = 0;
	while (str[index])
	{
		if (str[index] == '%')
		{
			count += compare(str[++index], list);
		}
		else 
			write(1, &str[index], 1);
		index++;
	}
	return (count);
}
