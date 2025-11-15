/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:08:15 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/15 13:47:10 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_pointer(void *ptr)
{
    unsigned long long      p;
    int                     count;

    p = (unsigned long long)ptr;
    count = 0;
    if (ptr == NULL)
        write(1, "(null)", 7);
    write(1, "0x", 2);
    count += 2;
    count += print_lower_hexadecimal(p);
    return (count); 
}
