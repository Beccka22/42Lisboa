/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:49:00 by beccka            #+#    #+#             */
/*   Updated: 2023/01/23 23:34:04 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int nbr, char *base)
{
	int					len;
	char				*str;
	unsigned long		n;

	n = (unsigned long)nbr;
	str = ft_hex_to_str(n, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
