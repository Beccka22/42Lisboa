/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:53:24 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/12 21:06:52 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		c;
	int		len;
	char	*nstr;

	i = -1;
	c = -1;
	if (!s1 && !s2)
		return (NULL);
	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nstr)
		return (NULL);
	while (s1[++c] && len-- > 0)
	{
		nstr[++i] = s1[c];
	}
	c = -1;
	while (s2[++c] && len-- > 0)
	{
		nstr[++i] = s2[c];
	}
	nstr[++i] = '\0';
	return (nstr);
}
