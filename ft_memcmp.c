/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:58:23 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/05 20:23:39 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = 0;
	if (n)
	{
		while (n--)
		{
			if (str1[i] != str2[i])
				return ((int)(str1[i] - str2[i]));
			i++;
		}
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "ablal";
// 	char *s2 = "ocolam";
// 	size_t n = 2;
// 	printf("%d\n", memcmp(s1, s2, n));
// 	printf("%d", ft_memcmp(s1, s2, n));
// 	return (0);
// }
