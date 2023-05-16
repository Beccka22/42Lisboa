/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:48:27 by beccka            #+#    #+#             */
/*   Updated: 2023/05/16 23:45:40 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void exitp(int num){
	if (num < 2)
		exit(0);
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