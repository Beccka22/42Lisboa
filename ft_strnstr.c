/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:48:54 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/11 20:17:43 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str_big, const char *str_little, size_t len)
{
	size_t	i;
	size_t	j;
	int		ct;

	i = -1;
	if (!str_little)
		return ((char *)str_big);
	while (str_big[++i] && i < len)
	{
		j = 0;
		if (str_big[i] == str_little[j])
		{
			ct = 0;
			while (str_little[j])
			{
				if (str_big[i] == str_little[j])
					ct++;
				i++;
				j++;
			}
			if (ct == (int)ft_strlen(str_little))
				return ((char *)str_big + (i - j));
		}
	}
	return (NULL);
}

// int main()
// {
// 	char *big = "asjh aaa jahskd";
// 	char *little = "aaa";
// 	size_t len;
// 	len = 20;
// 	printf("%s", ft_strnstr(big, little, len));
// 	return (0);
// }