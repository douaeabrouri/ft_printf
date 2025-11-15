/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_hexadecimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:26:19 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/15 13:47:06 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_lower_hexadecimal(unsigned long long n)
{
    int     count;
    char    c;
    char    *str;

    str = "0123456789abcdef";
    count = 0;
    if (n >= 16)
        count += print_lower_hexadecimal(n / 16);
    c = str[n % 16];
    write(1, &c, 1);
    return (count + 1);
}