/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:39:05 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/15 21:18:15 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allocate(char **arraystr, char const *s, char c)
{
	char		**arraystr_p;
	char const	*tmp;

	tmp = s;
	arraystr_p = arraystr;
	while (*tmp)
	{
		while (*s == c)
			++s;
		tmp = s;
		while (*tmp && *tmp != c)
			++tmp;
		if (*tmp == c || tmp > s)
		{
			*arraystr_p = ft_substr(s, 0, tmp - s);
			s = tmp;
			++arraystr_p;
		}
	}
	*arraystr_p = NULL;
}

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++count;
		while (*s && *s != c)
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arraystr;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	arraystr = (char **)malloc(sizeof(char *) * (size + 1));
	if (!arraystr)
		return (NULL);
	ft_allocate(arraystr, s, c);
	return (arraystr);
}
