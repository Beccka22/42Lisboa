/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:14:07 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/05 20:46:35 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = (void *)(nmemb * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, size);
	return (pointer);
}
 