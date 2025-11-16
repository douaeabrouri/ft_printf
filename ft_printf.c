/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:16:59 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/16 19:08:36 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	compare(char c, va_list list)
{
	int		w;

	w = 0;
	if (c == 's')
		w = print_string(va_arg(list, char *));
	else if (c == 'u')
		w = print_unsigned(va_arg(list, unsigned int));
	else if (c == 'd')
		w = print_decimal(va_arg(list, int));
	else if (c == 'i')
		w = print_integer(va_arg(list, int));
	else if (c == 'x')
		w = print_lower_hexadecimal(va_arg(list, unsigned int));
	else if (c == 'X')
		w = print_upper_hexadecimal(va_arg(list, unsigned int));
	else if (c == 'p')
		w = print_pointer(va_arg(list, void *));
	else if (c == 'c')
		w = print_character(va_arg(list, int));
	else if (c == '%')
		w = write(1, "%%", 1);
	if (w == -1)
		return (-1);
	return (w);
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
