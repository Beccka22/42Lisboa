/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:13:15 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/24 00:44:32 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char *format, int i, va_list arg)
{
	if (format[i + 1] == '%')
		return (ft_putchar(format[i + 1]));
	else if (format[i + 1] == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (format[i + 1] == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (format[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(arg, unsigned int)));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
	{
		if (format[i + 1] == 'X')
			return (ft_put_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
		else
			return (ft_put_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
	}
	else if (format[i + 1] == 'p' && arg != 0)
		return (ft_putstr("0x") + ft_put_pointer(va_arg(arg, void *), \
			"0123456789abcdef"));
	else
		return (0);
}
