/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:03:08 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/15 13:59:16 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_unsigned(unsigned int n)
{
    int     count;
    char    c;
    
    count = 0;
    if (n >= 10)
        count += print_unsigned(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
    return (++count);
}