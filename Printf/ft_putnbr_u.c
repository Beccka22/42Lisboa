/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:47:21 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/19 00:05:47 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libftprintf.h"

int	ft_putnbr_u(unsigned int nbr)
{
	char	*str;
	int		len;

	str = ft_utoa(nbr);
	len = ft_putstr(str);
	free(str);
	return (len);
}
