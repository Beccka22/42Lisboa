/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:31:41 by rneves-s          #+#    #+#             */
/*   Updated: 2023/04/15 19:07:15 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdlib.h>

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;	
}	t_list;

typedef struct s_split_next
{
	size_t	start;
	size_t	lenght;

}	t_split_next;

#endif
