/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:46:59 by rneves-s          #+#    #+#             */
/*   Updated: 2023/05/27 18:48:00 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int count_words(char *s, char c)
{
	int	i;
	int	c;
	
	i = 0;
	c = 0;
	if (!s)
		return (0);
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			c++;
		i++;
	}
	return (c);
}

static int count_word(char *s, char c)
{
	int	i;
	
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*skip(char *s, char c)
{
	while (s && *s == c)
		s++;
	return (s);
}

static char	**free_arg(char **arr)
{
	free(arr);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**arr;
	int		len_word;
	int		i;
	int		cwords;
	int		j;
	
	cwords = count_words(s, c);
	i = 0;
	arr = (char **)malloc(sizeof(char *) * (cwords + 1));
	if(!arr || !s)
		return (NULL);
	while (i < cwords)
	{
		s = skip(s, c);
		len_word = count_word(s, c);
		arr[i] = (char *)malloc(sizeof(char *) * (len_word + 1));
		if (!arr[i])
			free_arg(arr[i]);
		j = 0;
		while (j < len_word)
			arr[i][j++] = *s++;
		arr[i++][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}