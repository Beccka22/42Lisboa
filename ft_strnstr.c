/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:48:54 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/12 21:13:48 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str_big, const char *str_little, size_t len)
{
	size_t	i;
	int		j;

	if (*str_little == '\0')
		return ((char *)str_big);
	i = 0;
	while (str_big[i] && i < len)
	{
		if (str_big[i] == str_little[0])
		{
			j = 0;
			while (str_little[j] && str_big[i + j] && i + j < len
				&& str_big[i + j] == str_little[j])
				j++;
			if (str_little[j] == '\0')
				return ((char *)str_big + i);
		}
		i++;
	}
	return (0);
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