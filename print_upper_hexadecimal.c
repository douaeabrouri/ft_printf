/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upper_hexadecimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:37:38 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/16 19:09:46 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_upper_hexadecimal(unsigned long long n)
{
	int		count;
	char	c;
	char	*str;

	str = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += print_upper_hexadecimal(n / 16);
	c = str[n % 16];
	count += write(1, &c, 1);
	return (count);
}
