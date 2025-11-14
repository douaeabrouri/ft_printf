/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:03:08 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/14 23:09:10 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int print_unsigned(unsigned int n)
{
    int     count;
    char    c;
    
    if (n >= 10)
        count += print_unsigned(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
    return (++count);
}
int main(void)
{
    printf("%u\n", print_unsigned(-21323213));
}