/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:38:51 by beccka            #+#    #+#             */
/*   Updated: 2022/11/05 20:23:33 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
}

// int main () 
// {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;
//    char *ret2;
//    ret = memchr(str, ch, strlen(str));
//    ret2 = ft_memchr(str, ch, strlen(str));
//    printf("String after |%c| is - |%s|\n", ch, ret);
//    printf("String after |%c| is - |%s|\n", ch, ret2);
//    return(0);
// }