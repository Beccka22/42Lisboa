/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:24:05 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/11 20:17:29 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	size_t			i;

	i = 0;
	if ((int)start < 0 || !s)
		return (NULL);
	pointer = (char *)malloc(sizeof(s) * len);
	if (!pointer)
		return (NULL);
	while (s[start] && start < len)
	{
		pointer[i] = s[start];
		i++;
		start++;
	}
	pointer[i] = '\0';
	return (pointer);
}

// int main()
// {
// 	char *s = "ola";
// 	size_t start = -1;
// 	size_t len = 8;

// 	printf("%s\n", s);
// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }