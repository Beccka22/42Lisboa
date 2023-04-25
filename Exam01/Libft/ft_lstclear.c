/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:48:46 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/23 23:58:26 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cnode;
	t_list	*next;

	if (lst)
	{
		cnode = *lst;
		while (cnode)
		{
			next = cnode->next;
			ft_lstdelone(cnode, (del));
			cnode = next;
		}
		*lst = NULL;
	}
}
