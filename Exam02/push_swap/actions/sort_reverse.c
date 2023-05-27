/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:09:16 by rneves-s          #+#    #+#             */
/*   Updated: 2023/05/27 21:37:24 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(int *tab_a, int top_a, char c)
{
	int	n;

	n = 0;
	if (c != '2')
		ft_putstr("sa\n");
	if (top_a >= 1)
	{
		n = tab_a[top_a];
		tab_a[top_a] = tab_a[top_a - 1];
		tab_a[top_a - 1] = n;
	}
}

void sb(int *tab_b, int top_b, char c)
{
	int	n;

	n = 0;
	if (c != '2')
		ft_putstr("sb\n");
	if (top_b >= 1)
	{
		n = tab_b[top_b];
		tab_b[top_b] = tab_b[top_b - 1];
		tab_b[top_b - 1] = n;
	}
}

void	ss(int *tab_a, int top_a, int *tab_b, int top_b)
{
	ft_putstr("ss\n");
	sa(tab_a, top_a, '2');
	sb(tab_b, top_b, '2');
}

void	pa(int *tab_a, int *top_a, int *tab_b, int *top_b)
{
	ft_putstr("pa\n");
	if (*top_b > -1)
	{
		tab_a[*top_a + 1] = tab_b[*top_b];
		*top_b -= 1;
		*top_a += 1;
	}
}

void	pb(int *tab_a, int *top_a, int *tab_b, int *top_b)
{
	ft_putstr("pb\n");
	if (*top_b > -1)
	{
		tab_b[*top_b + 1] = tab_a[*top_a];
		*top_a -= 1;
		*top_b += 1;
	}
}
