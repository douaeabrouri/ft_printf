/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:57:12 by doabrour          #+#    #+#             */
/*   Updated: 2025/11/16 11:42:24 by doabrour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	print_character(char c);
int	print_decimal(int i);
int	print_integer(int i);
int	print_lower_hexadecimal(unsigned long long i);
int	print_upper_hexadecimal(unsigned long long i);
int	print_pointer(void *p);
int	print_string(char *str);
int	print_unsigned(unsigned int i);

#endif