/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:49:00 by beccka            #+#    #+#             */
/*   Updated: 2023/01/19 00:34:51 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_count_hex(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*ft_hex_to_str(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = ft_count_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if(!hex)
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

int	ft_put_hex(unsigned int  nbr, char *base)
{
	int				len;
	char			*str;
	unsigned	long n;

	n = (unsigned long)nbr;
	str = ft_hex_to_str(n, base);
	len	= ft_putstr(str);
	free(str);
	return (len);
}