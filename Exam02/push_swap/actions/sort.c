/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:09:19 by rneves-s          #+#    #+#             */
/*   Updated: 2023/05/27 21:01:01 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(int *tab_a, int top_a, char c)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * (top_a + 1));
	if(!tmp)
	{
		free(tab_a);
		exit(0);
	}
	tmp[0] = tab_a[top_a];
	if(c != '2')
		ft_putstr("ra\n");
	i = top_a;
	while (i > 0)
	{
		tmp[i] = tab_a[i - 1];
		i--;
	}
	i = 0;
	while (i <= top_a)
	{
		tab_a[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rb(int *tab_b, int top_b, char c)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * (top_b + 1));
	if(!tmp)
	{
		free(tab_b);
		exit(0);
	}
	tmp[0] = tab_b[top_b];
	if(c != '2')
		ft_putstr("rb\n");
	i = top_b;
	while (i > 0)
	{
		tmp[i] = tab_b[i - 1];
		i--;
	}
	i = 0;
	while (i <= top_b)
	{
		tab_b[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rr(int *tab_a, int top_a, int *tab_b, int top_b)
{
	ft_putstr("rr\n");
	ra(tab_a, &top_a, '2');
	rb(tab_b, top_b, '2');
}

void rra(int *tab_a, int top_a, char c)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * (top_a + 1));
	if (!tmp)
	{
		free(tab_a);
		exit(0);
	}
	i = top_a;
	if(c != '2')
		ft_putstr("rra\n");
	while (i <= top_a)
	{
		tmp[i - 1] = tab_a[i];
		i--;
	}
	i = 0;
	while (i <= top_a)
	{
		tab_a[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void rrb(int *tab_b, int top_b, char c)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * (top_b + 1));
	if (!tmp)
	{
		free(tab_b);
		exit(0);
	}
	i = top_b;
	if(c != '2')
		ft_putstr("rrb\n");
	while (i <= top_b)
	{
		tmp[i - 1] = tab_b[i];
		i--;
	}
	i = 0;
	while (i <= top_b)
	{
		tab_b[i] = tmp[i];
		i++;
	}
	free(tmp);
}