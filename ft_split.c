/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:39:05 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/12 18:34:06 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

static int	count_occurrences(char const *s, char c)
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	while (s[++i])
	{
		if ((char)s[i] == c)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**arraystr;

	i = 0;
	j = 0;
	count = count_occurrences(s, c);
	arraystr = malloc((count + 1) * sizeof(char *));
	if (arraystr == NULL)
		return (NULL);
	while (s[i] && j < count)
	{
		arraystr[j][i] = s[i];
		if ((char)s[i] == c)
		{
			printf("%s\n", arraystr[j]);
			j++;
		}
		i++;
	}
	return (arraystr);
}

// int main()
// {
// 	char *s = "lololololo";
// 	char c = 'o';
// 	int i = 0;
// 	char **a;
// 	a = ft_split(s, c);
// 	while (a[i])
// 	{
// 		printf("%s\n", a[i]);
// 		i++;
// 	}
// }