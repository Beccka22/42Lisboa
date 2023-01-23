/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:58:03 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/23 21:59:19 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_hex_to_str(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = ft_count_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size -1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}
