/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:12:30 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/28 22:06:13 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			len += ft_printf_arg(format, i, arg);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
// int	main()
// {
// 	ft_printf("string %s num %d, hexadecimais %X %x, %% caracter %c, 
//num %i . %u %p","maria",126, 232324, 232324,'H', 12, 150, 0);
// 	return (0);
// }
