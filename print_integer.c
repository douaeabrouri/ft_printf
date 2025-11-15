/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:01:46 by doabrour          #+#    #+#             */
/*   Updated: 2025/11/15 13:46:58 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_integer(int n)
{
	char c;
    long nb;
    int count;

    nb = n;
    count = 0;
    if (nb < 0)
    {
        write(1, "-", 1);
        count++;
        nb = -nb;
    }
    if (nb >= 10)
        count += print_integer(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
    return (count + 1);
}