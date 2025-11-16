/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_hexadecimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:26:19 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/16 19:15:50 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lower_hexadecimal(unsigned long long n)
{
	int		count;
	char	c;
	char	*str;

	str = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_lower_hexadecimal(n / 16);
	c = str[n % 16];
	count += write(1, &c, 1);
	return (count);
}
