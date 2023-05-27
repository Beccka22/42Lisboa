/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:47:20 by rneves-s          #+#    #+#             */
/*   Updated: 2023/05/27 21:57:14 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void exitp(int num)
{
	if (num < 2)
		exit(0);
}

int	find_j(int *tab, int top, int j)
{
	int	i;

	i = 0;
	while (i <= top)
	{
		if (j == tab[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_if_sorted(int *tab, int top)
{
	int	i;
	int	j;

	i = 0;
	while (i < top)
	{
		j = i + 1;
		while (j <= top)
		{
			if (tab[i] < tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


void	rrr(int *t_a, int top_a, int *t_b, int top_b)
{
	ft_putstr("rrr\n");
	rra(t_a, top_a, '2');
	rrb(t_b, top_b, '2');
}