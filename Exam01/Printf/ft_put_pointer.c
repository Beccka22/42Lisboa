/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:00:24 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/28 22:15:56 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(void *nbr, char *base)
{
	int					len;
	char				*str;
	unsigned long		n;

	n = (unsigned long)nbr;
	if (n == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	str = ft_hex_to_str(n, base);
	len = ft_putstr(str);
	free(str);
	return (len + 2);
}
