/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:28:56 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/18 16:00:09 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newn;

	newn = malloc(sizeof(*newn));
	if (newn == NULL)
		return (NULL);
	newn->content = content;
	newn->next = NULL;
	return (newn);
}
