/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:17:50 by beccka            #+#    #+#             */
/*   Updated: 2022/11/11 20:17:37 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			p = i;
		i++;
	}
	return ((char *)(s + p));
}

// int main()
// {
// 	char *s = "l--.-ao.a.--trala";
// 	int c = '.';

// 	printf("%s\n", ft_strrchr(s, c));
// 	printf("%s\n", strrchr(s, c));
// 	return (0);
// }