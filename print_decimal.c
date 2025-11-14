/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:59:04 by doabrour          #+#    #+#             */
/*   Updated: 2025/11/14 23:10:55 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	print_decimal(int n)
{
	return (print_integer(n));
}
int main(void)
{
    printf("%u\n", print_decimal(-21323213));
}