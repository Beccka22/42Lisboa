/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:59:14 by beccka            #+#    #+#             */
/*   Updated: 2023/05/10 01:10:02 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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