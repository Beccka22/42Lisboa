/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_pushb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:46:38 by rneves-s          #+#    #+#             */
/*   Updated: 2023/05/27 19:07:59 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indexing(t_stab *var)
{
	int	i;
	int j;
	int	count;
	int	*new_tmp;

	i = -1;
	j = -1;
	count = 0;
	new_tmp = (int *)malloc(sizeof(int) * (var->top_a + 1));
	while (++i <= var->top_a)
	{
		j = -1;
		while (++j <= var->top_a)
		{
			if (var->tab_a[j] < var->tab_a[i])
				count++;
		}
		new_tmp[i] = count;
		count = 0;
	}
	free(var->tab_a);
	var->tab_a = new_tmp;
}

void	push_sorted_to_b(t_stab *var)
{
	int	chunk;
	int	n;
	int counter;

	n = 1;
	counter = 1;
	chunk = (var->top_a / 10) + 10;
	while (var->top_a >= 0)
	{
		if (var->tab_a[var->top_a] < chunk * n)
		{
			pb(var->tab_a, &var->top_a, var->tab_b, &var->top_b);
			if (var->tab_b[var->top_b] < (n * chunk) - (chunk / 2))
				rb(var->tab_b, var->top_b, '1');
			counter++;
		}
		else
		{
			while (var->tab_a[var->top_a] >= chunk * n)	
				ra(var->tab_a, var->top_a, '1');
		}
		if (counter == chunk * n)
			n++;
	}
}

void	mini_cycle_sorta(t_stab *var, int *i, int j)
{
	int	findj;

	findj = -1;
	while (*i <= var->top_b)
	{
		findj = find_j(var->tab_b, var->top_b, j);
		if (findj >= (var->top_b / 2))
		{
			if (var->tab_b[var->top_b] != j)
				rb(var->tab_b, var->top_b, '1');
		}
		if (findj < (var->top_b / 2))
		{
			if (var->tab_b[var->top_a] != j)
				rrb(var->tab_b, var->top_b, '1');
		}
		*i += 1;
	}
}

void push_sorted_to_a(t_stab *var)
{
	int	i;
	int	top_b;
	int	num_p;

	i = 0;
	top_b = var->top_b;
	num_p = var->tab_b[var->top_b];

	while (top_b + 1)
	{
		i = 0;
		while (i <= var->top_b)
		{
			if (num_p < var->tab_b[i])
				top_b = var->tab_b[i];
			i++;
		}
		i = 0;
		mini_cycle_sorta(var, &i, top_b);
		pa(var->tab_a, &var->top_a, var->tab_b, var->top_b);
		top_b = var->tab_b[var->top_b];
		num_p--;
	}
}