/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:48:40 by rneves-s          #+#    #+#             */
/*   Updated: 2023/05/27 21:59:17 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>

typedef struct stab
{
	int	*tab_a;
	int	*tab_b;
	int	top_a;
	int	top_b;
}	t_stab;

void	sa(int *tab_a, int top_a, char c);
void	sb(int *tab_b, int top_b, char c);
void	ss(int *tab_a, int top_a, int *tab_b, int top_b);
void	pa(int *tab_a, int *top_a, int *tab_b, int *top_b);
void	pb(int *tab_a, int *top_a, int *tab_b, int *top_b);
void	ra(int *tab_a, int top_a, char c);
void	rb(int *tab_b, int top_b, char c);
void	rr(int *tab_a, int top_a, int *tab_b, int top_b);
void	rra(int *tab_a, int top_a, char c);
void	rrb(int *tab_b, int top_b, char c);
void	rrr(int *t_a, int top_a, int *t_b, int top_b);
void	sort_3nb(t_stab *var, int c);
int		find_small(int *tab, int top);
int		find_i(int *tab, int top, int find);
void	push_to_b(t_stab *var);
void	sort_5nb(t_stab *var, int c);
void	indexing(t_stab *var);
void	push_sorted_to_b(t_stab *var);
void	mini_cycle_sorta(t_stab *var, int *i, int j);
void	push_sorted_to_a(t_stab *var);
int		count_words(char *s, char c);
int		count_word(char *s, char c);
char	*skip(char *s, char c);
char	**free_arg(char **arr);
char	**ft_split(char *s, char c);
int		ft_strlen(char *s);
void	ft_putstr(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	exitp(int num);
int		find_j(int *tab, int top, int j);
int		check_if_sorted(int *tab, int top);
int		check_arg(char **argv);
int		check_repeat(int *tab, int top);
int		check_space(char **arr);
void	quit(t_stab *arg, int c, char **argv);
char	**load_tmp(char **arr, char **tmp, int *c);
void	param_to_var(t_stab *var, char **argv, int c);
void	nor(t_stab *var);

#endif
