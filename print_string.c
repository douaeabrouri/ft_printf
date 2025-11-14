/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:34:16 by douaeoxo          #+#    #+#             */
/*   Updated: 2025/11/14 23:39:13 by douaeoxo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int print_string(char *str)
{
    int count;

    if (!str)
        return (write(1, "(null)", 6));
    count = 0;
    while (*str)
    {
        write(1, str, 1);
        str++;
        count++;
    }
    return (count);
}