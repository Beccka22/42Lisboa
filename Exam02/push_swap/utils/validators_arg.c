/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:59:14 by beccka            #+#    #+#             */
/*   Updated: 2023/05/14 17:30:57 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if(!argv || !*argv)
		return (0);
	while (argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if(j = 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			if(argv[i] < '0' || argv[i] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_repeat(int *tab, int top)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < top)
	{
		j = i + 1;
		while (j <= top)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_space(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == ' ' && j == 0)
				return (0);
			if (arr[i][j] == ' ' && (arr[i][j + 1] == '\0' || arr[i][j + 1] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}