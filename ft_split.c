/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:39:05 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/15 02:47:45 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		count;
	int		count_letter;
	char	**arraystr;

	i = 0;
	count = count_occurrences(s, c);
	count_letter = 0;
	arraystr = malloc((count + 1) * sizeof(char *));
	if (!arraystr)
		return (NULL);
	while (*s)
	{
		count_letter++;
		if ((char)*s == c)
		{
			arraystr[i] = (char *)malloc((count_letter - 1)* sizeof(char *));
			if(arraystr[i])
			{
				arraystr[i] = ft_memcpy(arraystr[i], (s - (count_letter - 1)), count_letter - 1);
				count_letter = 0;
				if(ft_strlen(arraystr[i]) > 0)
					i++;
			}
		}
		s++;
	}
	arraystr[i] = "\0";
	return (arraystr);
}

// int main()
// {
// 	char *s = "looleololeoleoleoodo";
// 	char c = 'o';
// 	int i = 0;
// 	char **a;
// 	a = ft_split(s, c);
// 	printf("\n\n\n");
// 	while (a[i])
// 	{
// 		printf("str = %s\n", a[i]);
// 		i++;
// 	}
// 	return (0);
// }