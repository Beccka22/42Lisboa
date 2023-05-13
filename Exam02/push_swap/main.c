/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:43:09 by beccka            #+#    #+#             */
/*   Updated: 2023/05/13 02:15:24 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quit(t_stab *arga, int c, char **argv)
{
	if (c == 0 || c == 5)
		ft_putstr("Error\n");
}

char	**load_tmp(char **arr, char **tmp, int c)
{
	int		i;
	char	*tab;
	
	tab = NULL;
	i = 1;
	if (check_space(arr) == 0)
		quit(0, 5, 0);
	while (arr[i])
	{
		tab = ft_strjoin(tab, arr[i++]);
		tab = ft_strjoin(tab, " ");
	}
	tmp = ft_split(tab, ' ');
}

int main(int argc, char **argv){
	t_stab	var;
	char	**tmp;

	tmp = NULL;
	exitp(argc);
	tmp = load_tmp(argv, tmp, &argc);
	
}