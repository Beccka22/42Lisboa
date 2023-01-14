/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:58:37 by rneves-s          #+#    #+#             */
/*   Updated: 2023/01/14 20:59:35 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_itoa(const char *nptr)
{
	int	i;
	int	signal;
	int	v;

	signal = 1;
	i = 0;
	v = 0;
	while (*nptr && (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
			|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r'))
		++nptr;
	if (nptr[0] == '-')
	{
		signal = -1;
		i++;
	}	
	if (nptr[0] == '+')
		i++;
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		v = v * 10 + nptr[i] - '0';
		i++;
	}
	return (v * signal);
}
