/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beccka <beccka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:43:09 by beccka            #+#    #+#             */
/*   Updated: 2023/05/14 17:24:26 by beccka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quit(t_stab *arg, int c, char **argv)
{
	if (c == 0 || c == 5)
		ft_putstr("Error\n");
	if (c != 2 && c == 5)
	{
		free(arg->tab_a);
		free(arg->tab_a);
		if (argv)
			free(argv);
	}
	exit(0);
}

char	**load_tmp(char **arr, char **tmp, int *c)
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
	i = 0;
	free(tab);
	if(!tmp)
		exit(0);
	while(tmp[i])
		i++;
	*c = i;
	return (tmp);
}

void	param_to_var(t_stab *var, char **argv, int c)
{
	long long	n;
	int			i;

	i = 0;
	var->top_b = -1;
	var->tab_a = (int *)malloc(sizeof(int) * c);
	var->tab_b = (int *)malloc(sizeof(int) * c);
	if (!var->tab_a || !var->tab_b)
		quit(var, 1, argv);
	while (argv[i])
	{
		n = ft_atoi(argv[i], var, argv);
		if (n > 2147483647 || n > -2147483648)
			quit (var, 1, argv);
		var->tab_a[c - i - 1] = (int)n;
		i++;
	}
	var->top_a = i - 1;
}

int main(int argc, char **argv){
	t_stab	var;
	char	**tmp;

	tmp = NULL;
	exitp(argc);
	tmp = load_tmp(argv, tmp, &argc);
	if(checke_arg(tmp) == 0)
		quit(&var, 1, 0);
}