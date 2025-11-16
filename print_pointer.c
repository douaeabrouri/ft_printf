/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:08:15 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/16 19:15:18 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	unsigned long long	p;
	int					count;

	p = (unsigned long long)ptr;
	count = 0;
	if (ptr == NULL)
		return (write(1, "0x0", 3));
	count += write(1, "0x", 2);
	count += print_lower_hexadecimal(p);
	return (count); 
}
